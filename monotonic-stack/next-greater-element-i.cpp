class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       int n = nums1.size();
       int m = nums2.size();

       stack<int>st;
       vector<int>ans(m,INT_MIN);

       for (int i = m-1;i>=0;i--){

        while(!st.empty() && nums2[i]>=st.top()){
            st.pop();
        }

        if(st.empty()) {
            ans[i] = -1;
            st.push(nums2[i]);
        }
        else{
            ans[i] = st.top();
            st.push(nums2[i]);
        }
       }

       for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
          if(nums1[i] == nums2[j]) {
            nums1[i] = ans[j];
            break;
          }
        }
       }
       return nums1;
    }
};