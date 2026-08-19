class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        int n = nums.size();
        int count = 0;

        int sum = 0;
        map<int,int>mpp;
        
        for(int i =0;i<n;i++){
         sum+=nums[i];
         int rem = sum-goal;
        if(sum == goal) count++;
         if(mpp.find(rem)!=mpp.end()){
            count += mpp[rem];
         }
         mpp[sum]++;
        }
        return count;
    }
};