class Solution {
public:
    int maximumProduct(vector<int>& nums) {
       int n = nums.size();

       int fmax = INT_MIN;
       int smax = fmax;
       int tmax = smax; 


       for(int i =0;i<n;i++){
        if(nums[i]>fmax){
            tmax = smax;
            smax = fmax;
            fmax = nums[i];
        }
        else if(nums[i]>=smax){
            tmax = smax;
            smax = nums[i];
        }
        else if(nums[i]>=tmax){
            tmax = nums[i];
        }
       }

       return 1ll *(fmax*smax*tmax);
    }
};