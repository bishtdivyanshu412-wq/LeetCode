class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
     int n = nums.size();
     int flag = 1;
     int flag1 =1;
     for(int i=1;i<n;i++){
        if(nums[i]<nums[i-1]){
            flag = 0;
        }
        if(nums[i]>nums[i-1]){
        flag1 =0;
       }
     }
     if(flag1 ==0 && flag ==0 ){
        return false;
       }
     return true;   
    }
};