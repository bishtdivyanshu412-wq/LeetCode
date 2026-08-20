class Solution {
public:
    int check(int n , int k , vector<int>& nums){
        if(k<0) return 0;
        int count = 0;

        int i =0;
        int j = 0;
        int sum = 0;
        while(j<n){
            sum = sum + (nums[j]%2);
            while(sum>k){
                sum  = sum - (nums[i]%2);
                i++;
            }

            count += j-i+1;
            j++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
      int n = nums.size();
      int left = check(n,k,nums);
      int right = check(n,k-1,nums);
      return (left-right);
    }
};