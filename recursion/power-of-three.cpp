class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=2) return false;
        int prev = 0;
    while(n>1){
    prev = n;
    n = n/3;
    }
    if(n==1 && prev%3 == 0) return true;
    return false;    
    }
};