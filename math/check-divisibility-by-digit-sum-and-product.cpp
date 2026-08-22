class Solution {
public:
    bool checkDivisibility(int n) {
       int k = n;
       int sum = 0;
       int prod = 1;

       while(k!=0){
        int rem = k%10;
        sum += rem;
        prod = prod*rem;
        k = k/10;
       }

       if (n%(prod+sum) == 0) return true;
       return false;
    }
};