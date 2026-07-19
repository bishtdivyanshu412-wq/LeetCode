class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
      int n = nums.size();

      int count = k;

      for(int i =0;i<n;i++){
        if(nums[i] == 1 && count<k) return false;
        else if(nums[i] == 1 ){
            count = 0;
        }
        else if(nums[i] == 0) count++;
      } 
      return true; 
    }
};