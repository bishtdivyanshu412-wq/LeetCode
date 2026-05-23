class Solution {
public:
    int firstMatchingIndex(string s) {
    int n = s.size();
    int i = 0;
    int j = n-1;
    int ans  = INT_MAX;
    while(i<=j){
        if(s[i]==s[n-1-i]){
            return i;
        }
        i++;
        j--;
    }
    return -1;
    }
};