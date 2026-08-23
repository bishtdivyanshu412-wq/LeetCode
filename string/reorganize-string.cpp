class Solution {
public:
    string reorganizeString(string s) {
        int n = s.size();
        string ans(n, ' ');
        unordered_map<char, int> mpp;

        for(char c : s) {
            mpp[c]++;
        }

        int val = -1;
        char ch;

        for(auto it : mpp) {
            if(it.second > val) {
                val = it.second;
                ch = it.first;
            }
        }

        if(val > (n + 1) / 2) {
            return "";
        }

        int k = 0;

        for(int i = 0; i < val; i++) {
            ans[k] = ch;
            k += 2;
        }

        for(int i = 0; i < n; i++) {
            if(s[i] == ch) continue;

            if(k >= n) {
                k = 1;
            }

            ans[k] = s[i];
            k += 2;
        }

        return ans;
    }
};