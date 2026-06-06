class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
       vector<int>left(n,0);
       vector<int>right(n,0);
       int lsum =0;
       int rsum =0;
       for(int i =0;i<n;i++){
        right[n-1-i] = rsum;
        rsum += nums[n-1-i];
        left[i] = lsum;
        lsum += nums[i];
       }

       vector<int>result;
       for(int i =0;i<n;i++){
        int push = abs(left[i] - right[i]);
        result.push_back(push);
       }
      return result; 
    }
};