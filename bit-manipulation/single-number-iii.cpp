class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xr = 0;

        for (int num : nums) {
            xr ^= num;
        }

        
        unsigned int rightMost =
            static_cast<unsigned int>(xr) &
            -static_cast<unsigned int>(xr);

        int a = 0, b = 0;

        for (int num : nums) {
            if (static_cast<unsigned int>(num) & rightMost)
                a ^= num;
            else
                b ^= num;
        }

        return {a, b};
    }
};