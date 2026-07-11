class Solution {
public:
    double myPow(double x, int n) {
      double ans = 1.00;
        int y = abs(n);
      for(int i = 0 ;i<y;i++){
        ans = ans*x;
      } 
      if(n < 0){
        return 1.00/ans;
      }
      return ans;
    }
};