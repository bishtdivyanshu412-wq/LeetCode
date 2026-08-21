class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& nums) {
        int n = nums.size();

        sort(nums.begin(),nums.end());

        vector<int>ans;

        ans.push_back(nums[0][0]);
        ans.push_back(nums[0][1]);

        for(int i =1 ;i<n;i++){
            if(ans.back() == nums[i][0]){
                ans.push_back(nums[i][0]);
                ans.push_back(nums[i][1]);
            }
        }

        int m = ans.size()/2;

        return n-m;
    }
};