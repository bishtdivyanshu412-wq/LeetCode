class Solution {
public:
    int mirrorDistance(int n) {
        int x = n;
        int ans  =0;
        while(n!=0){
            int bit = n%10;
            ans = (ans*10) + bit ;
            n /= 10;
        }
        return abs(x - ans);
    }
};