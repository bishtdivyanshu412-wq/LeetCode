class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        int n = nums.size();
        int count = 0;

        int sum = 0;
        map<int,int>mpp;
        mpp[0] = 1;
        for(int i =0;i<n;i++){
         sum+=nums[i];
         int rem = sum-goal;
        
         if(mpp.find(rem)!=mpp.end()){
            count += mpp[rem];
         }
         mpp[sum]++;
        }
        return count;
    }
};