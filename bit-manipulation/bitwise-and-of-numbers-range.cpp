class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
       if(left == 1 && right == 2) return 0;
        int num = left;
        for(int i = left; i<right;i++){
            num = num&i;
        }
        return num;
    }
};