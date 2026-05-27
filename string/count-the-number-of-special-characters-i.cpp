class Solution {
public:
    int numberOfSpecialChars(string words) {
     int n = words.size();
     vector<int>ans(26,0);
     vector<int>res(26,0);
     for(int i =0;i<n;i++){
        if(words[i]>='a' &&  words[i] <= 'z'){
           ans[words[i]-'a']++;
         }
        else if(words[i]>='A' && words[i]<='Z'){
            res[words[i]-'A']++;
        }
     }
     int count = 0;
     for(int i = 0 ; i<res.size();i++){
        if(res[i]!=0 && ans[i]!=0) count++;
     }
     return count;
    }
};