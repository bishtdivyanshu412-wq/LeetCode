class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int n = nums.size();

       int count = 1;
       int i = 0;
       for(int j = 1; j<n;j++){
       if(nums[i] == nums[j] && count<2){
        nums[i+1] = nums[j];
        count++;
        i++;
       }
       else if(nums[i] == nums[j] && count == 2) {
        continue;
       }
       else if(nums[i] != nums[j]){
        nums[i+1] = nums[j];
        count = 1;
        i++;
       }
       } 

       return i+1;
    }
};