class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {
            ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..",
            ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.",
            "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."
        };

        set<string> ans;

        for (int i = 0; i < words.size(); i++) {
            string result = "";

            for (int j = 0; j < words[i].size(); j++) {
                result += morse[words[i][j] - 'a'];
            }

            ans.insert(result);
        }

        return ans.size();
    }
};