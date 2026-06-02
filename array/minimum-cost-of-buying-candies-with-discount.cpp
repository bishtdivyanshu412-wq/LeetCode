class Solution {
public:
    int minimumCost(vector<int>& cost) {
     sort(cost.begin(),cost.end());
     int n = cost.size();
     int totalcost = 0;
     for(int i = n-1;i>0;i-=2){
      if((i-1)>=0){
        totalcost += cost[i]+cost[i-1];
        cost[i] = -1;
        cost[i-1] = -1;
      }
      else{
        totalcost += cost[i];
        cost[i] = -1;
      }
     } 
     for(int i =0;i<n;i++){
        if(cost[i]!=-1){
            totalcost += cost[i];
        }
     } 
     return totalcost; 
    }
};