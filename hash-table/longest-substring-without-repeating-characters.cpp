class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxlen = 0;
       vector<int>hash(256,-1);

        int i = 0;
        int j = 0;

        while (j < n) {
            if(hash[s[j]] != -1){
                if(hash[s[j]]>=i){
                    i = hash[s[j]]+1;
                }
            }
            maxlen = max(maxlen,j-i+1);
            hash[s[j]] = j;
            j++;
        }

        return maxlen;
    }
};