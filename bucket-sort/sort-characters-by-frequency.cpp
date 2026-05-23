class Solution {
public:
    string frequencySort(string s) {
     int n = s.size();
     unordered_map<char,int>mpp;
     for(int i=0;i<n;i++){
        mpp[s[i]]++;
     }  
     sort(s.begin(),s.end() , [&] (char a , char b) {
        return mpp[a] !=mpp[b] ? mpp[a]>mpp[b] : b>a;
     }) ;
     return s;
    }
};