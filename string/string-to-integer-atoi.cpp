class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        long long ans = 0;
        vector<int> result;

        int i = 0;

        // Skip leading spaces
        while (i < n && s[i] == ' ') {
            i++;
        }

        // Check sign
        bool negative = false;

        if (i < n && s[i] == '-') {
            negative = true;
            i++;
        }
        else if (i < n && s[i] == '+') {
            i++;
        }

        // Collect digits
        while (i < n && isdigit(s[i])) {
            result.push_back(s[i] - '0');
            i++;
        }

        // Build number
        for (int j = 0; j < result.size(); j++) {
            ans = ans * 10 + result[j];

            if (!negative && ans > INT_MAX)
                return INT_MAX;

            if (negative && ans > 2147483648LL)
                return INT_MIN;
        }

        // Apply sign
        if (negative)
            return -ans;

        return ans;
    }
};