class Solution {
public:
    int vowelConsonantScore(string s) {
     int n = s.size();
     int vowcount = 0;
     int concount = 0;
     for(int i=0;i<n;i++){
         if(s[i]>='a' && s[i]<='z'){
             if(s[i]=='a' || s[i] == 'e' || s[i] == 'o' || s[i] =='i' || s[i] == 'u') {
                 vowcount++;
             }
             else{
                 concount++;
             }
         }
        
    }
        if(concount>0) return vowcount/concount;
        else return 0;
    }
};