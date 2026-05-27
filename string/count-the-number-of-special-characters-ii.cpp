class Solution {
public:
    int numberOfSpecialChars(string words) {
     int n = words.size();
     vector<int>small(26,0);
     vector<int>big(26,0);
     int count = 0;
     for(int i =0;i<n;i++){
        if(words[i]>='a' && words[i]<='z'){
            int ch = toupper(words[i]);
            if(big[ch-'A']==0 ){
            small[words[i]-'a']++;
            }
            else if(big[ch-'A']!=0){
                small[words[i]-'a'] = INT_MIN;
            }
        }
        else if(words[i]>='A' && words[i]<='Z'){
            if(big[words[i]-'A']+1 <=small[words[i]-'A']){
                big[words[i]-'A']++;
            }
        }
     } 
     for(int i =0;i<small.size();i++){
        if(small[i]>0){
        count += big[i];
        }
     }  
     return count;
    }
};