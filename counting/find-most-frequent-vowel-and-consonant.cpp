class Solution {
public:
    int maxFreqSum(string s) {
      int n = s.size();
      map<char,int>mpp;
      int vow=0;
      int con=0;
      for(int i =0;i<n;i++){
        mpp[s[i]]++;
      }
      for(int i =0;i<n;i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            if(mpp[s[i]]> vow ) vow = mpp[s[i]];
        }
        else {
            if(mpp[s[i]] > con  ) con = mpp[s[i]];
        }
      }
      return con+vow;
    }
};