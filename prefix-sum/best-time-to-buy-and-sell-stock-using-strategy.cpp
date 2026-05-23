class Solution {
public:
    long long maxProfit(vector<int>& prices, vector<int>& strategy, int k) {
        int n = prices.size();

        long long original = 0;
        for(int i = 0; i < n; i++){
            original += 1LL * prices[i] * strategy[i];
        }

        vector<long long> loss(n), gain(n);

        for(int i = 0; i < n; i++){
            loss[i] = 1LL * strategy[i] * prices[i];
            gain[i] = 1LL * prices[i] * (1 - strategy[i]);
        }

        vector<long long> prefLoss(n + 1, 0), prefGain(n + 1, 0);

        for(int i = 0; i < n; i++){
            prefLoss[i + 1] = prefLoss[i] + loss[i];
            prefGain[i + 1] = prefGain[i] + gain[i];
        }

        int half = k / 2;
        long long maxGain = 0;

        for(int i = 0; i + k <= n; i++){
            int mid = i + half;

            long long left = prefLoss[mid] - prefLoss[i];
            long long right = prefGain[i + k] - prefGain[mid];

            long long total = -left + right;

            maxGain = max(maxGain, total);
        }

        return original + max(0LL, maxGain);
    }
};