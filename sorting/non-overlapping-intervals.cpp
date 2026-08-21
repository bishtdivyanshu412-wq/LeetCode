class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1];
        });
        vector<int>ans;

        int cnt = 1;

        int last = nums[0][1];
        
        for(int i =1 ;i<n;i++){
            if(last<=nums[i][0]){
                cnt = cnt+1;
                last = nums[i][1];
            }
        }  
        return n-cnt;
    }
};