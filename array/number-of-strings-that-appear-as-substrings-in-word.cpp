class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {

        int count = 0;

        for (int i = 0; i < patterns.size(); i++) {

            int pos = word.find(patterns[i]);

            if (pos != string::npos) {
                count++;
            }
        }

        return count;
    }
};