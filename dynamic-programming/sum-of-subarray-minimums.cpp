class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        const int MOD = 1e9 + 7;

        long long sum = 0;

        for (int i = 0; i < n; i++) {
            long long mini = arr[i];
            for (int j = i; j < n; j++) {
                mini = min(mini, (long long)arr[j]);
                sum = (sum + mini) % MOD;
            }
        }

        return sum;
    }
};