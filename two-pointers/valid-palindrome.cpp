class Solution {
public:
    bool isPalindrome(string s) {
    string ans;
    int n = s.size();
    for(int i=0;i<n;i++){
        if(s[i]>='A' && s[i]<='Z'){
            ans.push_back(tolower(s[i]));
        }
        else if(s[i]>='a' && s[i]<='z'){
            ans.push_back(s[i]);
        }
        else if(s[i]>='0' && s[i]<='9') ans.push_back(s[i]);
    }
    string z = ans;
    reverse(ans.begin(),ans.end());
    return ans==z;  
    }
};