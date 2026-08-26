class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();

        string ans = "";

        int start = -1;
        int end = -1;

        int maxlen = INT_MAX;

        int i =0;
        int j =0;
        int count = 0;
        while(j<n){
            if(s[j] == '1') count++;
            while(count>=k){
                if(maxlen > (j-i+1)){
                    maxlen = j-i+1;
                    start = i;
                    end = j;
                }

                if(s[i] == '1') count--;
                i++; 
            }
            j++;
        }
        if(start == -1 && end == -1) return "";
        for(int i = start ; i<=end;i++){
            ans += s[i];
        }

        return ans;
    }
};