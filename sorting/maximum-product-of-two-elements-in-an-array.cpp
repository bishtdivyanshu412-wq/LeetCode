class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
      long long smax = INT_MIN;
      long long max = INT_MIN;
      int n = nums.size();

      for(int i =0;i<n;i++){
        if(nums[i]>=max){
             smax = max;
             max = nums[i];
        }
      }
      return 1ll*(max-1)*(smax-1);  
    }
};