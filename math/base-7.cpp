class Solution {
public:
    string convertToBase7(int num) {
    int ans =0;
    int a =1;
    while(num!=0){
        int ld = num%7;
        ans = ans + ld*a;
        a = a*10;
        num = num/7;
    }  
    string ch = to_string(ans) ;
    return ch; 
    }
};