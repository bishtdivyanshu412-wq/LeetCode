class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
    int n = landStartTime.size();
    
    int x = waterStartTime.size();
     int cost = INT_MAX; 
    for(int i =0;i<n;i++){
        for(int j =0;j<x;j++){
            if(landStartTime[i] + landDuration[i] >= waterStartTime[j]){
              int cost1 = landStartTime[i] + landDuration[i] + waterDuration[j];
              cost = min(cost , cost1);
            }
        }
    }
    for(int i  = 0;i<x;i++){
        for(int k =0;k<n;k++){
            if(waterStartTime[i] + waterDuration[i] >= landStartTime[k]){
                int cost1 = waterStartTime[i] + waterDuration[i] + landDuration[k];
                cost = min(cost,cost1);
            }
        }
    }
    return cost;
    }
};