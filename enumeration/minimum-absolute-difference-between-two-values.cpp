class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int last1 = -1, last2 = -1;
        int mindif = INT_MAX;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) last1 = i;
            if(nums[i] == 2) last2 = i;

            if(last1 != -1 && last2 != -1) {
                mindif = min(mindif, abs(last1 - last2));
            }
        }

        return mindif == INT_MAX ? -1 : mindif;
    }
};