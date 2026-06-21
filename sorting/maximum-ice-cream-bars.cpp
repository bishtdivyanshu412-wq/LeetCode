class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n = costs.size();
        sort(costs.begin(),costs.end());
        int coinsum = 0;
        int barcount =0;

        for(int i =0;i<n;i++){
         if(coinsum + costs[i]<= coins){
            barcount++;
            coinsum += costs[i];
         }
        }
        return barcount;
    }
};