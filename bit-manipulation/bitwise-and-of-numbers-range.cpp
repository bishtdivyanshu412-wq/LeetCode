class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        if(right - left == 1) return 0;
        int num = left;
        for(int i = left+1; i<right;i++){
            num = num&i;
        }
        return num;
    }
};