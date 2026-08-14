class Solution {
struct PairHash {
    size_t operator()(const pair<long long, long long>& p) const noexcept {
        // Простой, но достаточно надёжный микс для пар long long
        static const size_t FIX = 0x9E3779B97F4A7C15ULL;
        size_t h1 = hash<long long>{}(p.first);
        size_t h2 = hash<long long>{}(p.second);
        return h1 ^ (h2 + FIX + (h1 << 6) + (h1 >> 2));
    }
};
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = (int)points.size();
        if (n <= 2) return n;

        int best = 0;

        for (int i = 0; i < n; ++i) {
            unordered_map<pair<long long, long long>, int, PairHash> cnt;
            int duplicates = 1;          // сама точка i
            int local_max = 0;           // максимум среди разных наклонов

            long long x0 = points[i][0];
            long long y0 = points[i][1];

            for (int j = 0; j < n; ++j) {
                if (i == j) continue;

                long long dx = points[j][0] - x0;
                long long dy = points[j][1] - y0;

                if (dx == 0 && dy == 0) {
                    ++duplicates;
                    continue;
                }

                long long g = std::gcd(dx, dy);
                dx /= g;
                dy /= g;

                // Нормализация знака: dx >= 0, а если dx==0, то dy>0
                if (dx < 0 || (dx == 0 && dy < 0)) {
                    dx = -dx;
                    dy = -dy;
                }

                pair<long long, long long> key{dx, dy};
                int c = ++cnt[key];
                if (c > local_max) local_max = c;
            }

            // Все дубликаты лежат на любой прямой через эту точку
            best = max(best, local_max + duplicates);
        }

        return best;
    }
};