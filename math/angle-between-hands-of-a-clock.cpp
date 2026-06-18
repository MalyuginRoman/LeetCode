class Solution {
public:
    double angleClock(int hour, int minutes) {
        double min = static_cast<double>(minutes);
        double h = (hour % 12 + min / 60) * 30;
        double m = minutes * 6;
        double result = abs(h - m) < abs(m - h) ? abs(h - m) : abs(m - h);
        return result;
    }
};