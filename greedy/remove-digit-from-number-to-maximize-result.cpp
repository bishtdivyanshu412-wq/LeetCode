class Solution {
public:
    string removeDigit(string number, char digit) {
        int n = number.size();
        string maxans = "";

        for (int i = 0; i < n; i++) {
            if (number[i] == digit) {
                string ans = "";

                for (int j = 0; j < n; j++) {
                    if (j != i) {
                        ans += number[j];
                    }
                }

                if (ans > maxans) {
                    maxans = ans;
                }
            }
        }

        return maxans;
    }
};