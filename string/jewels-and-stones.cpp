class Solution {
public:
    int numJewelsInStones(string js, string s) {
        int freq[52] = {0};

        for(char c : s) {
            if(c >= 'a' && c <= 'z')
                freq[c - 'a']++;
            else
                freq[c - 'A' + 26]++;
        }

        int count = 0;

        for(char c : js) {
            if(c >= 'a' && c <= 'z')
                count += freq[c - 'a'];
            else
                count += freq[c - 'A' + 26];
        }

        return count;
    }
};