class Solution {
public:
    string ans = "";

    void solve(string &num, int i, int k, string curr) {
        // processed all digits
        if (i == num.size()) {
            if (k == 0) {
                // remove leading zeroes
                int j = 0;
                while (j < curr.size() && curr[j] == '0')
                    j++;

                string temp = curr.substr(j);

                if (temp == "")
                    temp = "0";

                if (ans == "" || temp.size() < ans.size() ||
                    (temp.size() == ans.size() && temp < ans)) {
                    ans = temp;
                }
            }
            return;
        }

        // Choice 1: keep current digit
        solve(num, i + 1, k, curr + num[i]);

        // Choice 2: remove current digit
        if (k > 0) {
            solve(num, i + 1, k - 1, curr);
        }
    }

    string removeKdigits(string num, int k) {
        if (k == num.size())
            return "0";

        solve(num, 0, k, "");

        return ans;
    }
};