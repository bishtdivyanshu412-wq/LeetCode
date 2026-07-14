class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int n = nums.size();
      unordered_map<int,int> mpp;

      for(int i =0;i<n;i++){
        mpp[nums[i]]++;
      } 
      vector<int> ans;
      int prev = INT_MIN;
      for(int i =0;i<n;i++){
        if(mpp[nums[i]] > 0 && prev != nums[i]){
            if(mpp[nums[i]] == 1) ans.push_back(nums[i]);
            else if(mpp[nums[i]] >=2) {
                ans.push_back(nums[i]);
                ans.push_back(nums[i]);
            }
        }

        prev = nums[i];
       
      } 
      

      for(int k =0;k<ans.size();k++){
        nums[k] = ans[k];
      }

      return ans.size();
    }
};