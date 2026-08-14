class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
    // Площадь первого прямоугольника
    long long areaA = 1LL * (ax2 - ax1) * (ay2 - ay1);

    // Площадь второго прямоугольника
    long long areaB = 1LL * (bx2 - bx1) * (by2 - by1);

    // Координаты пересечения
    int ox1 = std::max(ax1, bx1);
    int oy1 = std::max(ay1, by1);
    int ox2 = std::min(ax2, bx2);
    int oy2 = std::min(ay2, by2);

    long long overlap = 0;
    if (ox1 < ox2 && oy1 < oy2) {
        overlap = 1LL * (ox2 - ox1) * (oy2 - oy1);
    }

    return areaA + areaB - overlap;
    }
};