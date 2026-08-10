class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n = h.size();
        stack<int> st;
        int maxarea = 0;

        for (int i = 0; i <= n; i++) {
            int curr = (i == n) ? 0 : h[i];

            while (!st.empty() && curr < h[st.top()]) {
                int last = st.top();
                st.pop();

                int width;

                if (st.empty())
                    width = i;
                else
                    width = i - st.top() - 1;

                int area = h[last] * width;
                maxarea = max(maxarea, area);
            }

            if (st.empty() || curr > h[st.top()])
                st.push(i);
        }

        return maxarea;
    }
};