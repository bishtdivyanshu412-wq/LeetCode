class Solution {
public:
    int totalFruit(vector<int>& nums) {
        unordered_map<int, int> freq;

        int i = 0;
        int maxlen = 0;

        for (int j = 0; j < nums.size(); j++) {
            freq[nums[j]]++;

            while (freq.size() > 2) {
                freq[nums[i]]--;

                if (freq[nums[i]] == 0) {
                    freq.erase(nums[i]);
                }

                i++;
            }

            maxlen = max(maxlen, j - i + 1);
        }

        return maxlen;
    }
};