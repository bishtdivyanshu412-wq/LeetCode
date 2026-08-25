class Solution {
public:
    int countHillValley(vector<int>& nums) {
     int n = nums.size();

     int count = 0;
     int prev = nums[0];
     for(int i =1;i<n-1;i++){
       if(nums[i] == nums[i+1]) continue;
       if(prev > nums[i] && nums[i]<nums[i+1]) count++;
       else if(prev<nums[i] && nums[i]>nums[i+1]) count++;
       prev = nums[i];
     }
     return count;
    }
};