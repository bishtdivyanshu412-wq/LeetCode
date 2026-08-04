class Solution {
public:
    int countAsterisks(string s) {
      int n = s.size();
      int count = 0;
      int bcount = 0;

      for(int i =0;i<n;i++){
        if(s[i] == '|') bcount++;
        if(s[i] == '*' && bcount%2 == 0){
            count++;
        }
      }  
      return count;
    }
};