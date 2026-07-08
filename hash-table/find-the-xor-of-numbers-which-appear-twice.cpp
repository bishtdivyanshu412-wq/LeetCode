class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
     int n = nums.size();

     vector<int>result(50,0);

     for(int i =0;i<n;i++){
        result[nums[i]]++;
     } 
      int xr = 0;
     for(int i =0;i<n;i++){
        if(result[i] == 2) xr  = xr^i;
     }  
     return xr;
    }
};