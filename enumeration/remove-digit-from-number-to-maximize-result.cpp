class Solution {
public:
    string removeDigit(string number, char digit) {
     int n = number.size();
     int maxans = 0;
     for(int i =0;i<n;i++){
        if(number[i] == digit){
            int ans = 0;
            for(int j =0;j<n;j++){
                if(j == i){
                    continue;
                }
                else {
                    ans = ans*10+ number[j]-'0';
                }
            }
            maxans = max(maxans,ans);
        }
     } 
     string s = to_string(maxans);
     return s;  
    }
};