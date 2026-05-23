class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {

        int maxH = 1, maxV = 1;

        if (!hBars.empty()) {
            sort(hBars.begin(), hBars.end());
            int curr = 1;
            for (int i = 1; i < hBars.size(); i++) {
                if (hBars[i] == hBars[i - 1] + 1)
                    curr++;
                else
                    curr = 1;
                maxH = max(maxH, curr);
            }
        }

        if (!vBars.empty()) {
            sort(vBars.begin(), vBars.end());
            int curr = 1;
            for (int i = 1; i < vBars.size(); i++) {
                if (vBars[i] == vBars[i - 1] + 1)
                    curr++;
                else
                    curr = 1;
                maxV = max(maxV, curr);
            }
        }

        int side = min(maxH + 1, maxV + 1);
        return side * side;
    }
};
