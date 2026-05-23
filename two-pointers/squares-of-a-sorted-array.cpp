class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      int n = nums.size();
      vector<int> v;
      for(int i=0;i<n;i++){
        int ans = nums[i]*nums[i];
        v.push_back(ans);
      } 
      sort(v.begin(),v.end());
      return v;
    }
};