class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
     int n = nums.size();
     int sum =0;
     int maxi = nums[0];
     for(int i =0;i<n;i++){
        if(nums[i]>maxi ) maxi = nums[i];
     } 
     for(int i =0;i<k;i++){
          sum+=maxi;
      if(nums[i] == maxi ) nums[i] = maxi+1;
      maxi = maxi+1;
     }  
     return sum;
    }
};