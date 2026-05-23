class Solution {
public:
    int maxCapacity(vector<int>& cost, vector<int>& cap, int budget) {
        int n = cost.size();
        vector<pair<int,int>> machines;
        
        // Step 1: Pair cost and capacity
        for (int i = 0; i < n; i++) {
            machines.push_back({cost[i], cap[i]});
        }
        
        // Step 2: Sort by cost
        sort(machines.begin(), machines.end());
        
        // Step 3: Build prefix max capacity
        vector<int> prefixMax(n);
        prefixMax[0] = machines[0].second;
        for (int i = 1; i < n; i++) {
            prefixMax[i] = max(prefixMax[i - 1], machines[i].second);
        }
        
        int ans = 0;
        
        // Step 4: Try each machine
        for (int i = 0; i < n; i++) {
            int cost_i = machines[i].first;
            int cap_i  = machines[i].second;
            
            // Case 1: Single machine
            if (cost_i < budget) {
                ans = max(ans, cap_i);
            }
            
            // Case 2: Pair with another machine
            int remaining = budget - cost_i;
            
            // Binary search: last index with cost < remaining
            int left = 0, right = i - 1;
            int idx = -1;
            
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (machines[mid].first < remaining) {
                    idx = mid;
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
            
            if (idx != -1) {
                ans = max(ans, cap_i + prefixMax[idx]);
            }
        }
        
        return ans;
    }
};