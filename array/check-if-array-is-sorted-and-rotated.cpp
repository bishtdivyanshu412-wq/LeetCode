class Solution {
public:
    void reversee(vector<int>& nums , int left ,int right){
      while(left<right){
        swap(nums[left],nums[right]);
        left++;
        right--;
      }
    }
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count =0;
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                count = i;
            }
        }
        count = count%n;
        reversee(nums,0,count-1);
        reversee(nums,count,n-1);
        reversee(nums,0,n-1);

        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                return false;
            }
        }
        return true;
    }
};