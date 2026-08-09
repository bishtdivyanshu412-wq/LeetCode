class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while (stones.size() > 1) {
            int n = stones.size();

            int max1 = -1, max2 = -1;
            int idx1 = -1, idx2 = -1;

            for (int i = 0; i < n; i++) {
                if (stones[i] > max1) {
                    max1 = stones[i];
                    idx1 = i;
                }
            }

            for (int i = 0; i < n; i++) {
                if (i != idx1 && stones[i] > max2) {
                    max2 = stones[i];
                    idx2 = i;
                }
            }

            if (idx1 > idx2) {
                stones.erase(stones.begin() + idx1);
                stones.erase(stones.begin() + idx2);
            } else {
                stones.erase(stones.begin() + idx2);
                stones.erase(stones.begin() + idx1);
            }

            if (max1 != max2) {
                stones.push_back(max1 - max2);
            }
        }

        return stones.empty() ? 0 : stones[0];
    }
};