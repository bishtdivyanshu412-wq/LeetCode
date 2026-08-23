class Solution {
public:
    string reorganizeString(string s) {
        int n = s.size();
        unordered_map<char, int> mpp;

        for (char c : s) {
            mpp[c]++;
        }

        char ch;
        int mx = 0;

        for (auto it : mpp) {
            if (it.second > mx) {
                mx = it.second;
                ch = it.first;
            }
        }

        if (mx > (n + 1) / 2) {
            return "";
        }

        string ans(n, ' ');
        int k = 0;

        for (int i = 0; i < mx; i++) {
            ans[k] = ch;
            k += 2;
        }

        mpp[ch] = 0;

        for (auto it : mpp) {
            while (it.second > 0) {
                if (k >= n) {
                    k = 1;
                }

                ans[k] = it.first;
                k += 2;
                it.second--;
            }
        }

        return ans;
    }
};