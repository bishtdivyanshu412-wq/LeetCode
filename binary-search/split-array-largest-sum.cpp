class Solution {
public:
    int check(vector<int>& nums , int mid ){
        int painter = 1;
        long long last = 0;
        for(int i=0;i<nums.size();i++){
            if(last + nums[i] <= mid){
                last+=nums[i];
            }
            else{
                painter++;
                last = nums[i];
            }
        }
        return painter;
    }
    int splitArray(vector<int>& nums,int k) {
    
    int n = nums.size(); 
    if(k>n) return -1;
    int maxi = nums[0];
    int sum = 0;
    for(int i=0;i<n;i++){
        if(nums[i]>maxi) maxi = nums[i];
        sum+=nums[i];
    
    }
    int low = maxi ;
    int high = accumulate(nums.begin(),nums.end(),0);
    while(low<=high){
        int mid = low + (high -low)/2;
        int student = check(nums,mid);
        if(student>k) low = mid+1;
        else high = mid-1;
    }
    return low;
    }
};