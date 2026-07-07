class Solution {
public:
    int minBitFlips(int start, int goal) {
      int count = 0;
      int xr = start^goal;

      while(xr!=0){
        int bit = xr&1;
        if(bit == 1) count++;
        xr = xr>>1;
      }
      return count;
    }
};