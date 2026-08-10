class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n = h.size();
        stack<int> st;
        int maxarea = 0;

        for(int i = 0;i<n;i++){
            while(!st.empty() && h[i]<h[st.top()]){
                int nse = i;
                int element = h[st.top()];
                st.pop();
                int  pse = st.empty()?-1:st.top();
                maxarea = max(maxarea,element*(nse-pse-1));

            }
            st.push(i);
        }
         while(!st.empty()){
            int nse = n;
            int element = h[st.top()];
            st.pop();
            int  pse = st.empty()?-1:st.top();
            maxarea = max(maxarea,element*(nse-pse-1));
         }
        return maxarea;
    }
};