class Solution {
public:
    bool judgeCircle(string s) {
     int n = s.size();
     int L = 0 , R = 0 , U = 0 , D = 0;
     for(int i =0 ;i<n ;i++){
        if(s[i] == 'L') L++;
        else if(s[i] == 'R') R++;
        else if (s[i] == 'U') U++;
        else if (s[i] == 'D') D++; 
     }   
     if(L == R && D == U) return true;
     return false ;
    }
};