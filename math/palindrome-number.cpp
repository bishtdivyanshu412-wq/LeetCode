class Solution {
public:
    bool isPalindrome(int n) {
     if(n<0) return false;
     int x =n;
     long long ans =0;
     while(n>0){
        int rem = n%10;
        ans = (ans*10)+rem;
        n = n/10;
     }
     if(ans==x){
        return true;
     }
     return false;
    }
};