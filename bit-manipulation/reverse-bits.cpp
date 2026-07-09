class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string s = "";

        
        for (int i = 0; i < 32; i++) {
            s.push_back((n & 1) + '0');
            n >>= 1;
        }

        uint32_t ans = 0;

        
        for (int i = 0; i < 32; i++) {
            if (s[i] == '1') {
                ans |= (1U << (31 - i));
            }
        }

        return ans;
    }
};