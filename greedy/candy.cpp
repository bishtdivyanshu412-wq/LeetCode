class Solution {
public:
    int candy(vector<int>& ratings) {
        int n =  ratings.size();

        int count = 0;
        unordered_map<int,int>mpp;
        for(int i = 0 ;i<n;i++){
           if(i == 0 ){
            if(ratings[0]>ratings[1]){
                mpp[i] = 2;
            }
            else mpp[i] = 1;
           }
           else if(i == n-1){
            if(ratings[n-1]>ratings[n-2]){
                mpp[n-1] = mpp[n-2]+1;
            }
            else mpp[n-1] = 1;
           }
           else{
            if(ratings[i]>ratings[i+1] || ratings[i] > ratings[i-1]){
                mpp[i] = mpp[i-1]+1;
            }
            else mpp[i] = 1;
           }
        }
        for(auto it : mpp){
            count += it.second;
        }

        return count;
    }
};