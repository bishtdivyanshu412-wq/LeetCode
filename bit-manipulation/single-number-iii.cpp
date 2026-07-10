class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xr = 0;

       
        for (int num : nums)
            xr ^= num;

       
        int rightMost = xr & (-xr);

        int a = 0, b = 0;

        for (int num : nums) {
            if (num & rightMost)
                a ^= num;
            else
                b ^= num;
        }

        return {a, b};
    }
};