class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return 0;

        vector<long long> a(nums.begin(), nums.end());
        vector<int> L(n), R(n);
        vector<bool> alive(n, true);

        for (int i = 0; i < n; i++) {
            L[i] = i - 1;
            R[i] = i + 1;
        }

        int bad = 0;
        for (int i = 1; i < n; i++)
            if (a[i] < a[i - 1]) bad++;

        priority_queue<pair<long long,int>,
            vector<pair<long long,int>>,
            greater<>> pq;

        for (int i = 0; i + 1 < n; i++)
            pq.push({a[i] + a[i + 1], i});

        int ops = 0;

        while (bad > 0) {
            auto [sum, i] = pq.top();
            pq.pop();

            if (!alive[i] || R[i] >= n || !alive[R[i]])
                continue;

            int j = R[i];

            // 🔥 KEY FIX: skip stale heap entries
            if (sum != a[i] + a[j])
                continue;

            // remove old bad relations
            if (L[i] != -1 && alive[L[i]] && a[i] < a[L[i]]) bad--;
            if (a[j] < a[i]) bad--;
            if (R[j] < n && alive[R[j]] && a[R[j]] < a[j]) bad--;

            // merge
            a[i] += a[j];
            alive[j] = false;
            R[i] = R[j];
            if (R[j] < n) L[R[j]] = i;

            // add new bad relations
            if (L[i] != -1 && alive[L[i]] && a[i] < a[L[i]]) bad++;
            if (R[i] < n && alive[R[i]] && a[R[i]] < a[i]) bad++;

            // push new adjacent sums
            if (L[i] != -1 && alive[L[i]])
                pq.push({a[L[i]] + a[i], L[i]});
            if (R[i] < n && alive[R[i]])
                pq.push({a[i] + a[R[i]], i});

            ops++;
        }

        return ops;
    }
};

