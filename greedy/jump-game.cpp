class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();

        int prevmax  = nums[0];

        for(int i =0;i<n;i++){

            if(prevmax <0) return false;
            prevmax = max(prevmax,nums[i]);

            if(i+prevmax >= n-1){
                return true;
            }

            prevmax--;
        }
        return false;
    }
};