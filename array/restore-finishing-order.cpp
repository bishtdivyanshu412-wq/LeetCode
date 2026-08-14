class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> ans;
        unordered_set<int> st(friends.begin(), friends.end());

        for (int x : order) {
            if (st.count(x)) {
                ans.push_back(x);
            }
        }

        return ans;
    }
};