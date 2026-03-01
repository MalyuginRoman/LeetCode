class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int result = 0;
        int S1 = abs(ax2-ax1)*abs(ay2-ay1);
        int S2 = abs(bx2-bx1)*abs(by2-by1);
        int S3 = 0;
        if ((ax2 >= bx1 && ax2 <= bx2) && (by2 >= ay1 && by2 <= ay2) && S1 != 0 && S2 != 0)
            S3 = abs(ax2-bx1)*abs(by2-ay1);
        if ((ax2 >= bx1 && ax2 <= bx2) && (by1 >= ay1 && by1 <= ay2) && S1 != 0 && S2 != 0)
            S3 = abs(ax2-bx1)*abs(ay2-by1);
        if ((ax1 >= bx1 && ax1 <= bx2) && (by1 >= ay1 && by1 <= ay2) && S1 != 0 && S2 != 0)
            S3 = abs(bx2-ax1)*abs(ay2-by1);
        if ((ax1 >= bx1 && ax1 <= bx2) && (ay1 >= by1 && ay1 <= by2) && S1 != 0 && S2 != 0)
            S3 = abs(bx2-ax1)*abs(ay1-by2);
        if ((ax2 >= bx1 && ax2 <= bx2) && (ax1 >= bx1 && ax1 <= bx2) && (ay2 >= by1 && ay2 <= by2) && (ay1 >= by1 && ay1 <= by2) && S1 != 0 && S2 != 0) {
            S1 = 0;
            S3 = 0; }
        if ((bx2 >= ax1 && bx2 <= ax2) && (bx1 >= ax1 && bx1 <= ax2) && (by2 >= ay1 && by2 <= ay2) && (by1 >= ay1 && by1 <= ay2) && S1 != 0 && S2 != 0) {
            S2 = 0;
            S3 = 0; }
        result = S1 + S2 - S3;
        return result;
    }
};