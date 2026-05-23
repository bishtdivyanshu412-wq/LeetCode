class Solution {
public:
    double separateSquares(vector<vector<int>>& squares) {
        vector<double> ys;
        for (auto &s : squares) {
            ys.push_back(s[1]);
            ys.push_back(s[1] + s[2]);
        }

        sort(ys.begin(), ys.end());
        ys.erase(unique(ys.begin(), ys.end()), ys.end());

        int m = ys.size();
        vector<vector<pair<double,double>>> add(m), remove(m);

        unordered_map<double,int> idx;
        for (int i = 0; i < m; i++) idx[ys[i]] = i;

        for (auto &s : squares) {
            double y1 = s[1], y2 = s[1] + s[2];
            double x1 = s[0], x2 = s[0] + s[2];
            add[idx[y1]].push_back({x1, x2});
            remove[idx[y2]].push_back({x1, x2});
        }

        multiset<pair<double,double>> active;
        vector<double> slabArea(m - 1, 0.0);

        auto unionLen = [&]() {
            if (active.empty()) return 0.0;
            vector<pair<double,double>> v(active.begin(), active.end());
            sort(v.begin(), v.end());

            double len = 0;
            double L = v[0].first, R = v[0].second;
            for (int i = 1; i < v.size(); i++) {
                if (v[i].first > R) {
                    len += R - L;
                    L = v[i].first;
                    R = v[i].second;
                } else {
                    R = max(R, v[i].second);
                }
            }
            len += R - L;
            return len;
        };

        for (int i = 0; i + 1 < m; i++) {
            for (auto &p : add[i]) active.insert(p);
            for (auto &p : remove[i]) active.erase(active.find(p));

            double height = ys[i + 1] - ys[i];
            slabArea[i] = unionLen() * height;
        }

        vector<double> prefix(m, 0.0);
        for (int i = 1; i < m; i++)
            prefix[i] = prefix[i - 1] + slabArea[i - 1];

        double total = prefix[m - 1];
        double half = total / 2.0;

        int i = lower_bound(prefix.begin(), prefix.end(), half) - prefix.begin();
        if (i == 0) return ys[0];

        double need = half - prefix[i - 1];
        return ys[i - 1] + need / slabArea[i - 1] * (ys[i] - ys[i - 1]);
    }
};
