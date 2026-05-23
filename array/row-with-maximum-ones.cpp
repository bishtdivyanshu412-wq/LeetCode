class Solution {
public:
    // int lowerbound(vector<int>& row, int n, int x) {
    //     int low = 0, high = n - 1;
    //     int ans = n;

    //     while (low <= high) {
    //         int mid = low + (high - low) / 2;
    //         if (row[mid] >= x) {
    //             ans = mid;
    //             high = mid - 1;
    //         } else {
    //             low = mid + 1;
    //         }
    //     }
    //     return ans;
    // }

    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        int maxOnes = -1;
        int index = -1;

        for (int i = 0; i < m; i++) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 1) {
                    cnt++;
                }
            }

            if (cnt > maxOnes) {
                maxOnes = cnt;
                index = i;
            }
        }

        return {index, maxOnes};
    }
};

