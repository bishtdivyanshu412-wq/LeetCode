class Solution {
public:
    bool hasAlternatingBits(int n) {
     int prev =2;

     while(n!=0){
        
        int bit = n&1;

        if(prev == bit ) return false;

        prev = n&1;

        n = n>>1;
     }   
     return true;
    }
};