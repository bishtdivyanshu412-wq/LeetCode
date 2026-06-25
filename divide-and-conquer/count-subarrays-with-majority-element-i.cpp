class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
      int n = nums.size();
      int subcount = 0;

      for(int i =0;i<n;i++){
        for(int j =i;j<n;j++){
            if(i==j && nums[i] == target){
                subcount++;
            }
            int count =0;
            int candidate =0;
            for(int k = i;k<j;k++){
             if(count == 0) candidate = nums[k];
             if(nums[i] == candidate) count++;
             else count--;
            }
            if(candidate == target) subcount++;
        }
      }  
      return subcount;
    }
};