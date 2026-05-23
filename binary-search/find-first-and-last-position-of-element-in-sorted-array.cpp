class Solution {
public:
    int firstpos(vector<int>& nums , int low , int high , int target){
        int ans = -1;
        while(low<=high){
            int mid = low + (high - low )/2;
            if(nums[mid]==target){
                high = mid-1;
                ans = mid;
            }
            else if (nums[mid]>target) {
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }

    int lastpos(vector<int>& nums , int low , int high , int target){
        int ans = -1;
        while(low<=high){
            int mid = low + (high - low )/2;
            if(nums[mid]==target){
                low = mid+1;
                ans = mid;
            }
            else if(nums[mid]>target) {
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
     int n = nums.size();
     int first = firstpos(nums,0,n-1,target);
     int last = lastpos(nums,0,n-1,target);
     return {first,last};   
    }
};