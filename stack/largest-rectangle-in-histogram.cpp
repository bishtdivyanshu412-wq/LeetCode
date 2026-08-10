class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n = h.size();
        stack<int> st;
        int maxarea = 0;

        for (int i = 0; i <= n; i++) {
            int curr = (i == n) ? 0 : h[i];

            while (!st.empty() && h[st.top()] > curr) {
                int last = st.top();
                st.pop();

                int left = st.empty() ? -1 : st.top();
                int width = i - left - 1;

                int area = h[last] * width;
                maxarea = max(maxarea, area);
            }

            st.push(i);
        }

        return maxarea;
    }
};