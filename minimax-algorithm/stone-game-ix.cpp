class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int n = stones.size();

        if(n%2 == 0) return true;
        return false;
    }
};