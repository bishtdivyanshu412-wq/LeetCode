class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();
        vector<long long> result(n, 0);
        map<int, vector<long long>> mpp;

       
        for(int i = 0; i < n; i++){
            mpp[nums[i]].push_back(i);
        }

        for(auto &it : mpp){
            vector<long long> &vec = it.second;
            int k = vec.size();

            
            vector<long long> prefix(k, 0);
            prefix[0] = vec[0];

            for(int i = 1; i < k; i++){
                prefix[i] = prefix[i - 1] + vec[i];
            }

            for(int i = 0; i < k; i++){
                long long left = 0, right = 0;

                if(i > 0)
                    left = i * vec[i] - prefix[i - 1];

                if(i < k - 1)
                    right = (prefix[k - 1] - prefix[i]) - (k - i - 1) * vec[i];

                result[vec[i]] = left + right;
            }
        }

        return result;
    }
};