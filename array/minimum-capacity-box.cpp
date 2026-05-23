class Solution {
public:
    int minimumIndex(vector<int>& nums, int itemSize) {
      int n = nums.size();
      int idx = -1;
      int min = INT_MAX;
      for(int i=0;i<n;i++){
        if(nums[i]>=itemSize && min > nums[i] ){
          min = nums[i];
          idx = i;
        }
      }  
      return idx;
    }
};