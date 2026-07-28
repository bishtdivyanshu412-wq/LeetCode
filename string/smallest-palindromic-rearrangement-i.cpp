class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> freq(26, 0);

        for (char c : s) {
            freq[c - 'a']++;
        }

        int left = 0;
        int right = s.size() - 1;

        for (int i = 0; i < 26; i++) {
            while (freq[i] >= 2) {
                s[left++] = 'a' + i;
                s[right--] = 'a' + i;
                freq[i] -= 2;
            }
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i] == 1) {
                s[left] = 'a' + i;
                break;
            }
        }

        return s;
    }
};