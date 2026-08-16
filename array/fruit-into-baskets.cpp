class Solution {
public:
    int totalFruit(vector<int>& nums) {
      int n = nums.size();

      int b1 = nums[0];
      int b2 = -1;

      int maxcount = 0;

      int i = 0;
      int j = 1;
      while(j<n){
       if(b2 == -1 && nums[j] != b1){
        b2 = nums[i];
       }
       else if(b1 != nums[j] || b2 !=nums[j]) {
        while(nums[i] == b1){
            i++;
        }
       }
       maxcount = max(maxcount,j-i+1);
       j++;
      }  
      return maxcount;
    }
};