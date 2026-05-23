class Solution {
public:
    int maxArea(vector<int>& nums) {
    int n = nums.size();
    int maxarea =  0;
    int left = 0;
    int right = n-1;
    while(left<right){
        int width = right - left;
        int len = min(nums[right],nums[left]);
        maxarea = max(maxarea , len*width);
        if(nums[right]>nums[left]) left++;
        else right--;
    }
    return maxarea; 
    }
};