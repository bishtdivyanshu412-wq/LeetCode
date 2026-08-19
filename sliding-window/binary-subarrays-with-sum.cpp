class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        int n = nums.size();
        int count = 0;

        int sum = 0;
        map<int,int>mpp;
        mpp[nums[0]] = 1;
        for(int i =0;i<n;i++){
         sum+=nums[i];
         int rem = goal-sum;

         if(mpp.find(rem)!=mpp.end()){
            count += mpp[nums[i]];
         }
         mpp[nums[i]]++;
        }
        return count;
    }
};