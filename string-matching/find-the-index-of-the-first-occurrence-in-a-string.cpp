class Solution {
public:
    int strStr(string haystack, string needle) {
     int n = haystack.size();
     int ans = -1;
     if(haystack.find(needle)<haystack.size()){
        ans = haystack.find(needle);
     } 
     return ans; 
    }
};