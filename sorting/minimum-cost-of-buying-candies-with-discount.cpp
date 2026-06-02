class Solution {
public:
    int minimumCost(vector<int>& cost) {
     sort(cost.begin(),cost.end());
     int n = cost.size();
     if(n==1) return cost[0];
     int totalcost = 0;
     for(int i = n-1;i>=0;i-=3){
      if((i-1)>=0){
        totalcost += cost[i]+cost[i-1];
      }
      else if((i-1) < 0) {
        totalcost += cost[i];
      }
     } 
     
     return totalcost; 
    }
};