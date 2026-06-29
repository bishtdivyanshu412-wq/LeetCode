class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        int idx = -1;
        for(int i =0;i<n;i++){
            int rsum =0;
            int lsum = 0;

            for(int k = i-1 ;k>=0;k--){
                lsum+=nums[k];
            }

            for(int x = i+1;x<n;x++ ){
                rsum += nums[x];
            }

            if(lsum == rsum ){
                idx = i ;
                break;
            }
        }
        return idx;
    }
};