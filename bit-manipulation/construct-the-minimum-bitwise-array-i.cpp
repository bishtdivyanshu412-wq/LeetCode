class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans(nums.size());

        for (int i = 0; i < nums.size(); i++) {
            int n = nums[i];

            if (n % 2 == 0) {
                ans[i] = -1;
                continue;
            }

            int best = -1;
            for (int x = 0; x <= n; x++) {
                if ((x | (x + 1)) == n) {
                    best = x;
                    break;
                }
            }
            ans[i] = best;
        }
        return ans;
    }
};
