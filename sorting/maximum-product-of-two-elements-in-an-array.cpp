class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
      int smax = INT_MIN;
      int max = INT_MIN;
      int n = nums.size();

      for(int i =0;i<n;i++){
        if(nums[i]>=max){
            smax = max;
            max = nums[i];
        }
        else if(nums[i]>smax){
            smax = nums[i];
        }
      }
      return (max-1)*(smax-1);  
    }
};