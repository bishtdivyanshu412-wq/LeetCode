class Solution {
public:
    bool possible(vector<int>& nums , int days ,int m , int k){
        int count =0;
        int boquet =0;
        for(int i=0;i<nums.size();i++){
            if(days>=nums[i]){
                count++;
            }
            else{
                boquet += count/k;
                count =0;
            }

        }
        boquet += count/k;
        return boquet>=m;
    }
    int minDays(vector<int>& nums, int m, int k) {
      int n = nums.size();
      int mini = nums[0];
      for(int i=0;i<n;i++){
        if(nums[i]<mini){
            mini = nums[i];
        }
      }
      int maxi =nums[0];
      for(int i=0;i<n;i++){
        if(nums[i]>maxi){
            maxi = nums[i];
        }
      }
      int low = mini ;
      int high = maxi;
      int ans =-1;
      while(low<=high){
        int mid = low +(high -low)/2;
        bool flag = possible(nums,mid,m,k);
        if(flag == true ) {
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
      } 
      return ans; 
    }
};