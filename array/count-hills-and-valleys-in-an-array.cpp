class Solution {
public:
    int countHillValley(vector<int>& nums) {
     int n = nums.size();

     int count = 0;

     for(int i =1;i<n-1;i++){
        if(nums[i] == nums[i-1]) continue;
        int left = -1;
        int right = -1;

        for(int j = i+1;j<n;j++){
            if(nums[i]!=nums[j]){
                right = nums[j];
                break;
            }
        }

        for(int k = i-1;k>=0;k--){
            if(nums[i]!=nums[k]){
                left = nums[k];
                break;
            }
        }

        if(left != -1 && right != -1){
            if(nums[i]>left && nums[i]>right) count++;
            else if(nums[i]<left && nums[i]<right) count++;
        }
     }   

     return count;
    }
};