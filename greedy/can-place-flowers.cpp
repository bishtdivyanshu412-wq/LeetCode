class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int n) {
       int m = nums.size();
       if(m<=2) return false;
        
       int i =0;
       while(i<m){
        if(i == 0 && (nums[i]+nums[i+1]) == 0) {
            n--;
            i = i+2;
        }
        else if(nums[i] + nums[i+1] == 0 && nums[i] +  nums[i-1] == 0){
            n--;
            i = i+2;
        }
        else if(i == m-1){
            if(nums[m-1]+nums[m-2] == 0){
                n--;
            }
        }
        i++;

        if(n<=0) return true;
       }
       return false;
    }
};