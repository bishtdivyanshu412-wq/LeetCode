class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
      int ans = arrivalTime + delayedTime;
      if(ans%24==0) return 0;
      if(ans>24)return ans-24;
      return ans;  
    }
};