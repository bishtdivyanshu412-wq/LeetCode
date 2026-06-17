class Solution {
public:
    char processStr(string s, long long k) {
        int n = s.size();

        vector<long long> len(n + 1, 0);

        for (int i = 0; i < n; i++) {
            char ch = s[i];

            if (ch >= 'a' && ch <= 'z') {
                len[i + 1] = min(k + 1, len[i] + 1);
            }
            else if (ch == '*') {
                len[i + 1] = max(0LL, len[i] - 1);
            }
            else if (ch == '#') {
                len[i + 1] = min(k + 1, len[i] * 2);
            }
            else if (ch == '%') {
                len[i + 1] = len[i];
            }
        }

        if (k >= len[n]) return '.';

        for (int i = n - 1; i >= 0; i--) {
            char ch = s[i];

            if (ch >= 'a' && ch <= 'z') {
                if (k == len[i]) return ch;
            }
            else if (ch == '*') {
                if (len[i] > len[i + 1]) {
                    
                    if (k == len[i + 1]) return '.';
                }
            }
            else if (ch == '#') {
                long long oldLen = len[i];
                if (k >= oldLen) k -= oldLen;
            }
            else if (ch == '%') {
                k = len[i] - 1 - k;
            }
        }

        return '.';
    }
};