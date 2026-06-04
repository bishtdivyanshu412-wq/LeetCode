class Solution {
public:
    int check(int n){
        if(n==0 || n==1) return n;
        return check(n-1)+check(n-2);
    }
    int fib(int n) {
      int ans = check(n); 
      return ans; 
    }
};