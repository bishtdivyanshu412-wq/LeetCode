class Solution {
public:
    long long splitArray(vector<int>& nums) {
        int n = nums.size();

        vector<bool> inc(n, true), dec(n, true);

        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1] && inc[i - 1])
                inc[i] = true;
            else
                inc[i] = false;
        }

        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] > nums[i + 1] && dec[i + 1])
                dec[i] = true;
            else
                dec[i] = false;
        }

        vector<long long> prefix(n);
        prefix[0] = nums[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }

        long long total = prefix[n - 1];
        long long ans = LLONG_MAX;
        bool found = false;

        for (int i = 0; i < n - 1; i++) {
            if (inc[i] && dec[i + 1]) {
                long long left = prefix[i];
                long long right = total - left;
                ans = min(ans, llabs(left - right));
                found = true;
            }
        }

        return found ? ans : -1;
    }
};