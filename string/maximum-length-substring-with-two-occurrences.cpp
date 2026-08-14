class Solution {
public:
    int maximumLengthSubstring(string s) {
     int n = s.size();
     unordered_map<int,int>mpp;

     int maxlen = 0;

     int i =0;
     int j =0;

     while(j<n){
        if(mpp[s[j]] <2){
            mpp[s[i]]++;
            maxlen = max(maxlen,j-i+1);
            j++;
        }
        else{
            mpp[s[i]]--;
            i++;
        }
     }  
     return maxlen;
    }
};