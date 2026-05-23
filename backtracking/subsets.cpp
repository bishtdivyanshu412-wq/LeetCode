class Solution {
public:

    void prints(vector<int>& nums ,vector<int>& ans , int i , vector<vector<int>>& allsubsets){
        if(i == nums.size()){
        allsubsets.push_back(ans);
        return;
        }
        
        ans.push_back(nums[i]);
        prints(nums,ans,i+1,allsubsets);
        ans.pop_back();
        prints(nums,ans,i+1,allsubsets);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans;
    vector<vector<int>> allsubsets;
    prints(nums,ans,0,allsubsets);
    return allsubsets;
    }
};