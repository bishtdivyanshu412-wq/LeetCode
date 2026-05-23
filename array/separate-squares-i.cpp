class Solution {
public:
    double separateSquares(vector<vector<int>>& squares) {
        double low = 1e18, high = -1e18;

        for (auto &s : squares) {
            low = min(low, (double)s[1]);
            high = max(high, (double)(s[1] + s[2]));
        }

        auto diff = [&](double Y) {
            double below = 0, above = 0;

            for (auto &s : squares) {
                double y = s[1];
                double l = s[2];

                if (y + l <= Y) {
                    below += l * l;
                }
                else if (y >= Y) {
                    above += l * l;
                }
                else {
                    below += l * (Y - y);
                    above += l * ((y + l) - Y);
                }
            }
            return below - above;
        };

        for (int i = 0; i < 80; i++) {   
            double mid = (low + high) / 2.0;
            if (diff(mid) < 0)
                low = mid;
            else
                high = mid;
        }

        return (low + high) / 2.0;
    }
};
