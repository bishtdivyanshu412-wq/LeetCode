class Solution {
public:
    void solve(int idx, vector<int>& candidates, vector<int>& ds,
               vector<vector<int>>& result, int target) {

        if (target == 0) {
            result.push_back(ds);
            return;
        }

        for (int i = idx; i < candidates.size(); i++) {

            
            if (i > idx && candidates[i] == candidates[i - 1])
                continue;

            
            if (candidates[i] > target)
                break;

            ds.push_back(candidates[i]);
            solve(i + 1, candidates, ds, result, target - candidates[i]);
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        sort(candidates.begin(), candidates.end());

        vector<vector<int>> result;
        vector<int> ds;

        solve(0, candidates, ds, result, target);

        return result;
    }
};