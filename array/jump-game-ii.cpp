class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();

        int step = 0;
        int prevmax = nums[0];

        for(int i =0;i<n;i++){
            prevmax = max(prevmax,nums[i]);
            if(prevmax+i >= n-1){
                step++;
                return step;
            }

            prevmax--;
            step++;
        }
        return -1;
    }
};