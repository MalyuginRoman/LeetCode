class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int result = 0;
        int S1 = abs(ax2-ax1)*abs(ay2-ay1);
        int S2 = abs(bx2-bx1)*abs(by2-by1);
        int S3 = 0;
        bool b1 = ay1 < by1;
        bool b2 = ay2 > by2;
        bool b3 = (ax1 > bx1 && ax1 < bx2);
        bool b4 = (ax2 > bx2);
        if (ax1 == bx1 && ay1 == by1 && ax2 == bx2 && ay2 == by2 &&    //equal
            S1 != 0 && S2 != 0) {
            S2 = 0;
            S3 = 0; }
        else if ((ax2 >= bx1 && ax2 <= bx2) && (ax1 >= bx1 && ax1 <= bx2) &&    //in1
            (ay2 >= by1 && ay2 <= by2) && (ay1 >= by1 && ay1 <= by2) && S1 != 0 && S2 != 0) {
            S1 = 0;
            S3 = 0; }
        else if ((bx2 >= ax1 && bx2 <= ax2) && (bx1 >= ax1 && bx1 <= ax2) &&    //in2
            (by2 >= ay1 && by2 <= ay2) && (by1 >= ay1 && by1 <= ay2) && S1 != 0 && S2 != 0) {
            S2 = 0;
            S3 = 0; }
        else if (ax1 <= bx1 && ax2 >= bx2 && (ay1 > by1 && ay1 < by2) &&      // v1
            (ay2 > by2) && S1 != 0 && S2 != 0)
            S3 = abs(bx2-bx1)*abs(ay1-by2);
        else if (bx1 <= ax1 && bx2 >= ax2 && (ay1 > by1 && ay1 < by2) &&      // v2
            (ay2 > by2) && S1 != 0 && S2 != 0)
            S3 = abs(ax2-ax1)*abs(ay1-by2);
        else if (ax1 < bx1 && ax2 > bx2 && (ay1 >= by1 && ay1 <= by2) &&      // v3
            (ay2 < by2) && S1 != 0 && S2 != 0)
            S3 = abs(bx2-bx1)*abs(ay2-by1);
        else if (ay1 <= by1 && ay2 >= by2 && (bx1 > ax1 && bx1 < ax2) &&      // r1
            (ax1 < bx1) && S1 != 0 && S2 != 0)
            S3 = abs(ax2-bx1)*abs(by2-by1);
        else if (ay1 >= by1 && ay2 <= by2 && (bx1 > ax1 && bx1 < ax2) &&      // r2
            (ax1 < bx1) && S1 != 0 && S2 != 0)
            S3 = abs(ax2-bx1)*abs(ay2-ay1);
        else if (ax1 <= bx1 && ax2 >= bx2 && (ay2 > by1 && ay2 < by2) &&      // n1
            (ay1 < by1) && S1 != 0 && S2 != 0)
            S3 = abs(bx2-bx1)*abs(ay2-by1);
        else if (ax1 >= bx1 && ax2 <= bx2 && (ay2 > by1 && ay2 < by2) &&      // n2
            (ay1 < by1) && S1 != 0 && S2 != 0)
            S3 = abs(ax2-ax1)*abs(ay2-by1);
        else if (ay1 <= by1 && ay2 >= by2 && (ax1 > bx1 && ax1 < bx2) &&      // l1
            (ax2 > bx2) && S1 != 0 && S2 != 0)
            S3 = abs(bx2-ax1)*abs(by2-by1);
        else if (ay1 >= by1 && ay2 <= by2 && (ax1 > bx1 && ax1 < bx2) &&      // l2
            (ax2 > bx2) && S1 != 0 && S2 != 0)
            S3 = abs(bx2-ax1)*abs(ay2-ay1);
        else if ((ax2 > bx1 && ax2 < bx2) && (by2 > ay1 && by2 < ay2) &&    // vl
            (bx1 > ax1) && (by1 < ay1) && S1 != 0 && S2 != 0)
            S3 = abs(ax2-bx1)*abs(by2-ay1);
        else if ((ax2 > bx1 && ax2 < bx2) && (by1 > ay1 && by1 < ay2) &&    // nl
            (bx1 > ax1) && (by2 > ay2) && S1 != 0 && S2 != 0)
            S3 = abs(ax2-bx1)*abs(ay2-by1);
        else if ((ax1 > bx1 && ax1 < bx2) && (by1 > ay1 && by1 < ay2) &&    // nr
            (bx1 < ax1) && (by2 > ay2) && S1 != 0 && S2 != 0)
            S3 = abs(bx2-ax1)*abs(ay2-by1);
        else if ((ax1 > bx1 && ax1 < bx2) && (ay1 > by1 && ay1 < by2) &&    // vr
            (bx2 < ax2) && (by1 < ay1) && S1 != 0 && S2 != 0)
            S3 = abs(bx2-ax1)*abs(ay1-by2);
        result = S1 + S2 - S3;
        return result;
    }
};