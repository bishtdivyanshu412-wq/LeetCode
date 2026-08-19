class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        int n = nums.size();
        int count = 0;

        int i = 0;
        int j = 0;
        int sum = 0;
        

        while(j<n){
            sum += nums[j];
            while(sum>goal){
                sum -= nums[i];
                if(sum == goal){
                    count++;
                }
                i++;
            }

            if(sum == goal) count++;
            j++;
        }
        return count;
    }
};