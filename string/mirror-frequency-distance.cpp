class Solution {
public:
    int mirrorFrequency(string s) {
        vector<int> ch(26, 0);
        vector<int> dig(10, 0);

        for(char c : s){
            if(c >= 'a' && c <= 'z') ch[c - 'a']++;
            else dig[c - '0']++;
        }

        int sum = 0;

        for(int i = 0; i < 26; i++){
            int j = 25 - i;
            if(i > j) break;
            sum += abs(ch[i] - ch[j]);
        }

        for(int i = 0; i < 10; i++){
            int j = 9 - i;
            if(i > j) break;
            sum += abs(dig[i] - dig[j]);
        }

        return sum;
    }
};