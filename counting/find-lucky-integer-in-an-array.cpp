class Solution {
public:
    int findLucky(vector<int>& nums) {
        int n  = nums.size();
        vector<int> freq(501, 0);
        int ans = -1;

        for(int i=0;i<n;i++){
          freq[nums[i]]++;
        }
        

        for (int i = 1; i <= 500; i++) {
            if (freq[i] == i) {
                ans = i;   
            }
        }
        return ans;
    }
};
