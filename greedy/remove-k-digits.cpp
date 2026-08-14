class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        stack<char> st;

        // Process digits from left to right
        for (int i = 0; i < n; i++) {

            while (!st.empty() && k > 0 && st.top() > num[i]) {
                st.pop();
                k--;
            }

            st.push(num[i]);
        }

        // If k is still remaining, remove from the end
        while (k > 0) {
            st.pop();
            k--;
        }

        // Convert stack to string
        string ans = "";

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        // Remove leading zeroes
        int i = 0;

        while (i < ans.size() && ans[i] == '0') {
            i++;
        }

        ans = ans.substr(i);

        // If everything was zero
        if (ans.empty()) {
            return "0";
        }

        return ans;
    }
};