class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxlen = 0;
        unordered_map<char, int> mpp;

        int i = 0;
        int j = 0;

        while (j < n) {
            if (mpp[s[j]] == 0) {
                mpp[s[j]]++;
                maxlen = max(maxlen, j - i + 1);
                j++;
            }
            else {
                mpp[s[i]]--;
                i++;
            }
        }

        return maxlen;
    }
};