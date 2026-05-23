class Solution {
public:
    int dominantIndices(vector<int>& nums) {
     int n = nums.size();
        int count =0;
        for(int i=0;i<n-1;i++){
        int count1=0;
            int sum =0;
            for(int j=i+1;j<n;j++){
              sum += nums[j]; 
                count1++;
            }
            int find = sum/count1;
            if(nums[i]>find) count++;
        }
        return count;
    }
};