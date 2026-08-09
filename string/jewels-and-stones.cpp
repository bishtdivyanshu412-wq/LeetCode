class Solution {
public:
    int numJewelsInStones(string js, string s) {
        int n = js.size();
        int m = s.size();

        int count = 0;
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(js[i] == s[j]) count++;
            }
        }
        return count;
    }
};