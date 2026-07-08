class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
      int n = nums.size();

      vector<vector<int>>result;

      int subset = 1<<n;

      for(int i = 0;i<subset;i++){
        vector<int>ans;

        for(int  j =0;j<n;j++){
            if(i&(1<<j)) ans.push_back(nums[j]);
        }
        result.push_back(ans);
      }  
      return result;
    }
};