class Solution {
public:
    int trap(vector<int>& nums) {
        int n = nums.size();

        int leftmax = 0 , rightmax =0 , total = 0;

        int l = 0 , r = n-1;

        while(l<r){
            if(nums[l]<=nums[r]){
                if(leftmax>nums[l]){
                    total+=leftmax-nums[l];
                    l = l+1;
                }
                else{
                    leftmax = nums[l];
                    l = l+1;
                }
             }
             else{
                if(rightmax>nums[r]){
                total += rightmax - nums[r];
                r = r-1;
                }
                else {
                    rightmax = nums[r];
                    r = r-1;
             }
            }
        }
        return total;
    }
};