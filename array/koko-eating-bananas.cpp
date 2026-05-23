class Solution {
public:
    long long cal(vector<int>& nums, int mid,int n){
        long long sum = 0;
        for(int i =0;i<n;i++){
            sum += (nums[i] + mid-1)/mid;  
        }
        return sum;
    }

    int minEatingSpeed(vector<int>& nums, int h) {
        int n = nums.size();
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        while(low <= high){
            int mid = low + (high - low) / 2;
            long long hours = cal(nums, mid,n);

            if(hours <= h){
                high = mid - 1;   
            } else {
                low = mid + 1;    
            }
        }
        return low;   
    }
};
