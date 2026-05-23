class Solution {
public:
    void print(vector<int>& nums , vector<int>& ans , int i , vector<vector<int>>& subsets){
        if(i == nums.size()){
            subsets.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);

        print(nums,ans,i+1,subsets);
         
         int idx = i+1;
         while(idx<nums.size() && nums[idx]==nums[idx-1]){
            idx++;
         }
        ans.pop_back();

        print(nums,ans,idx,subsets);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
      vector<vector<int>> subsets;
      vector<int> ans;
      print(nums,ans,0,subsets);
      return subsets;  
    }
};