class Solution {
public:
    int numberOfSubstrings(string s) {
      int n = s.size();
      int count =0;

      for(int i =0;i<n-2;i++){
        int counta =0;
        int countb = 0;
        int countc =0;
        for(int j =i;j<n;j++){
            if(s[j] == 'a') counta++;
            else if(s[j] == 'b') countb++;
            else countc++;
            if(counta >= 1 && countb >= 1 && countc >= 1) count++;
        }
      }  
      return count;
    }
};