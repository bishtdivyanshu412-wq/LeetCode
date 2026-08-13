class Solution {
public:
    int myAtoi(string s) {
      int n = s.size();
      int ans = 0;
      vector<int>result;
      for(int i = 0;i<n;i++){
        if(isdigit(s[i])) result.push_back(s[i]-'0');
        else break;
      }
      for(int i =0;i<result.size();i++){
        ans = ans*10 + result[i];
      }
      if(s[0] == '-') return -(ans);
      return ans;
    }
};