class Solution {
public:
    int trap(vector<int>& nums) {
       int n = nums.size();

       int leftmax = 0;
       int rightmax = 0;

       int i = 0;
       int j = n-1;
       int totalWater = 0;
       while(i<=j){
        if(leftmax<=rightmax){
            if(nums[i]<leftmax){
                totalWater += leftmax-nums[i];
                i++;
            }
            else{
                leftmax = nums[i];
                i++;
            }
        }
        else{
            if(nums[j]<rightmax){
                totalWater += rightmax-nums[j];
                j--;
            }
            else{
                rightmax = nums[j];
                j--;
            }
        }
       } 
       return totalWater;
    }
};