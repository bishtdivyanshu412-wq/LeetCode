class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
      int n = nums.size();
      int count = 0;

      for(int i =0;i<n;i++){
        int c= 0;
        for(int j = i;j<n;j++){
             if(nums[j]%2 != 0) c++;
            if(c>k) break;
            if(c == k) count++;
        }
        
      }  
      return count ;
    }
};