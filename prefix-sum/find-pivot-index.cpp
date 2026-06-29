class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      int n = nums.size();

      int prefix = 0;
      int suffix = 0;

      for(int i =0;i<n;i++){
        suffix += nums[i];
      }  

      for(int i =0;i<n;i++){
        suffix -= nums[i];
        if(prefix == suffix) return i;
        prefix += nums[i];
      }
      return -1;
    }
};