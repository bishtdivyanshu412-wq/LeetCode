class Solution {
public:
    int numberOfSpecialChars(string words) {
     int n = words.size();
     vector<int>ans(26,0);
     int count =0;
     for(int i =0;i<n;i++){
        if(words[i]>='a' &&  words[i] <= 'z'){
           ans[words[i]-'a']++;
         }
        else if(words[i]>='A' && words[i]<='Z'){
            char ch = tolower(words[i]);
            if(ans[ch-'a']!=0){
                count++;
            }
              ans[ch-'a'] = INT_MIN;
        }
     }
     return count;
    }
};