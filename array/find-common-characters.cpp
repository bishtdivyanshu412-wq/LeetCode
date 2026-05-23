class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> result;

        for(char c : words[0]) {
            bool found = true;

            for(int i = 1; i < words.size(); i++) {
                bool matched = false;

                for(int j = 0; j < words[i].size(); j++) {
                    if(words[i][j] == c) {
                        words[i][j] = '#'; 
                        matched = true;
                        break;
                    }
                }

                if(!matched) {
                    found = false;
                    break;
                }
            }

            if(found) {
                result.push_back(string(1, c));
            }
        }

        return result;
    }
};