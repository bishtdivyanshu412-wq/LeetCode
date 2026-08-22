class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        int sum = 1;
        int i = 1;

        while (i < n) {
            int peak = 0;
            int down = 0;

            while (i < n && ratings[i] > ratings[i - 1]) {
                peak++;
                sum += peak + 1;
                i++;
            }

            while (i < n && ratings[i] < ratings[i - 1]) {
                down++;
                sum += down;
                i++;
            }

            if (down > 0) {
                sum -= min(peak, down);
            }

            if (i < n && ratings[i] == ratings[i - 1]) {
                sum++;
                i++;
            }
        }

        return sum;
    }
};