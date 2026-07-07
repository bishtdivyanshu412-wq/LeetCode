class Solution {
public:
    long long sumAndMultiply(int n) {
       if(n==0) return 0;

      long long  sum = 0;
      long long ans =0;
      long long i = 1;
      while(n!=0){
        int rem = n%10;
        if(rem != 0) {
            sum+=rem;
        ans = rem*i + ans;
        i*=10;
        }
        n/=10;
      } 
      return sum*ans;
    }
};