class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
      int n = nums.size();
      for(int i =0;i<n-2;i++){
        if(nums[i]<nums[i+1] && nums[i+1]<nums[i+2]){
            return true;
        }
      }
      return false;  
    }
};