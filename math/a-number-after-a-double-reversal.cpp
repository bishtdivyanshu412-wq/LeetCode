class Solution {
public:
    bool isSameAfterReversals(int num) {
    int n = num;
    int ans =0;
    while(num!=0){
        int bit = num%10;
        ans = ans*10 + bit;
        num = num/10;
    }  
    int ans2 =0;
    while(ans!=0){
        int bit = ans%10;
        ans2 = ans2*10+bit;
        ans = ans/10;
    }  
    if(n == ans2) return true;
    else return false;
    }
};