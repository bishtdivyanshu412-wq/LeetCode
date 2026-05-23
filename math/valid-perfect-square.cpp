class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1 ) return true;
        for(long long i=1;i*i<=num;i++){
            if(num%i==0){
                int fac = num/i;
                if(fac == i) return true;
            }
        }
        return false;
    }
};