class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
      int n = nums.size();
      int subcount = 0;

      for(int i =0;i<n;i++){
        for(int j =i;j<n;j++){
            if((j-i == 0) && nums[i] == target){
                subcount++;
            }
            else{
             int count = 0;
             for(int k =i;k<=j;k++){
                if(nums[k] == target) count++;
             }

             int size = j-i+1;
             if(count>size/2) subcount++;
            } 
            }
        }  
      return subcount;
    }
};