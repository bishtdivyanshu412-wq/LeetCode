class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();

        int i = 0;
        int count = 0;
        int bestLen = INT_MAX;
        int bestStart = -1;

        for (int j = 0; j < n; j++) {

            if (s[j] == '1')
                count++;

            while (count >= k) {

                int len = j - i + 1;

                if (len < bestLen ||
                    (len == bestLen &&
                     (bestStart == -1 || s.compare(i, len, s, bestStart, bestLen) < 0))) {

                    bestLen = len;
                    bestStart = i;
                }

                if (s[i] == '1')
                    count--;

                i++;
            }
        }

        if (bestStart == -1)
            return "";

        return s.substr(bestStart, bestLen);
    }
};