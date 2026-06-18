class Solution {
public:
    double angleClock(int hour, int minutes) {
        double min = static_cast<double>(minutes);
        double h = (hour % 12 + min / 60) * 30;
        double m = minutes * 6;
        double result = abs(h - m) < 180 ? abs(h - m) : 360. - abs(h - m);
        return result;
    }
};