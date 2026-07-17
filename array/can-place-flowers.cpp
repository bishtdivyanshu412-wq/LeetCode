class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int n) {
       int m = nums.size();

       if(nums[0] == 0 && nums[1] == 0) {
        n--;
        nums[0] = 1;

       } 
       if(nums[m-1] == 0 && nums[m-2] == 0) {
        n--;
        nums[m-1] = 1;
       }
        if(n==0) return true;
       for(int i = 1 ; i< m-1;i++){
        if(n== 0) return true;
        if(nums[i] == 0 ){
            if(nums[i-1] == 0 && nums[i+1] == 0) {
                n--;
                nums[i] = 1;
            }
        }
       }
        return false;
    }
};