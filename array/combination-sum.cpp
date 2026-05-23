class Solution {
public:
    void combination(vector<int>& candidates , int target ,int idx , vector<vector<int>>& ans , vector<int>& ds){
        int n = candidates.size();
     if(idx == n){
        if(target == 0){
            ans.push_back(ds);
        }
        return ;
     } 
     if(candidates[idx]<=target){
        ds.push_back(candidates[idx]);
        combination(candidates,target-candidates[idx],idx,ans,ds);
        ds.pop_back();
     }    
     combination(candidates,target,idx+1,ans,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      vector<vector<int>> ans;
      vector<int> ds;
      combination(candidates,target,0,ans,ds);
      return ans;
    }
};