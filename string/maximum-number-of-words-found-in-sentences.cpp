class Solution {
public:
    int mostWordsFound(vector<string>& s) {
      int maxcount = 0;
      for(int i =0;i<s.size();i++){
        int count = 1;
        for(int j =0;j<s[i].size();j++){
            if(s[i][j] == ' ') count++;
        }
          maxcount = max(count,maxcount);
      }  
      return maxcount;
    }
};