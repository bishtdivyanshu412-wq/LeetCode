class Solution {
public:
    string reorganizeString(string s) {
        int n = s.size();
        string ans = "";
        unordered_map<char,int>mpp;

        for(int i =0;i<n;i++){
            mpp[s[i]]++;
        }
        int val =0;
        char ch;
        for(auto it : mpp){
            if(it.second>val){
                val = it.second;
                ch = it.first;
            }
        }

        int rem = n-val;
        int count = val;
         
        ans += ch;

        if(rem+1 >= val){
            for(int i =0;i<n;i++){
             if(s[i] != ch){
                ans += s[i];
             if(count>0){
                ans+= ch;
                count--;
             }
             }
            }
        }
        else{
            return "";
        }

        
       return ans; 
    }
};