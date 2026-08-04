class Solution {
public:
    int balancedStringSplit(string s) {
      int n = s.size();

      int lcount = 0;
      int rcount = 0;  
      int count =0;
      for(int i =0;i<n;i++){
        if(s[i] == 'L') lcount++;
        if(s[i] == 'R') rcount++;
        if(lcount == rcount){
            count++;
            lcount =0;
            rcount = 0;
        }
      }
    //   if(lcount == rcount) count++;
      return count;
    }
};