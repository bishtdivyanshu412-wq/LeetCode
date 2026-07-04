class Solution {
public:


    void solve(int idx , vector<int>&candidates , vector<vector<int>>& result , vector<int>ds, int target){
        if(idx == candidates.size()){
            if(target == 0){
                result.push_back(ds);
            }
            return; 
        }
        
        if(candidates[idx]<=target){
        ds.push_back(candidates[idx]);

            solve(idx+1,candidates,result,ds,target-candidates[idx]);
            

            ds.pop_back();

        }
        solve(idx+1,candidates,result,ds,target);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        int n = candidates.size();
       
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>result;
        vector<int>ds;

        solve(0,candidates,result,ds,target);
        set<vector<int>> st;

        for(int i =0;i<result.size();i++){
            st.insert(result[i]);
        }

        vector<vector<int>> ans;

        for(auto x : st){
            ans.push_back(x);
        }
        return ans;
    }
};