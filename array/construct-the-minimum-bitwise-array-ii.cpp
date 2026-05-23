class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;

        for (int num : nums) {
            if ((num & 1) == 0) {
                ans.push_back(-1);
            } else {
                int p = (num + 1) & -(num + 1);
                ans.push_back(num - (p >> 1));
            }
        }

        return ans;
    }
};
