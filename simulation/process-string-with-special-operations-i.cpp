class Solution {
public:
    string processStr(string s) {
       string result;
       int n = s.size();
       for(int i =0;i<n;i++){
        int sz = result.size();
        if(s[i] == '*' && !result.empty()) result.pop_back();
        else if(s[i] == '#') {
         for(int j =0;j<sz;j++){
            result.push_back(result[j]);
         }
        }
        else if(s[i] == '%') reverse(result.begin(),result.end());
        else if(s[i]>='a' && s[i]<='z')result.push_back(s[i]);
       } 
       return result;
    }
};