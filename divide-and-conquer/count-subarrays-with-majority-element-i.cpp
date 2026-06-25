class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
      int n = nums.size();
      int subcount = 0;

      for(int i =0;i<n;i++){
        int count = 0;
        for(int j =i;j<n;j++){
          if(j-i+1 == 0 && target == nums[j]) subcount++;
          if(nums[j] == target) {
            count++;
          }
          int size = j-i+1;
          if(count>size/2)subcount++;
         }
        }  
      return subcount;
    }
};