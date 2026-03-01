class Solution {
public:
    int divide(int dividend, int divisor) {
        long int result = 0;
        long int val = 0;
        if (dividend == 0) return 0;
        else if (dividend == divisor) return 1;
        else if (divisor == 1) return dividend;
        else if (divisor == -1) return -dividend;
        else if ((dividend > 0 && divisor > 0) || (dividend < 0 && divisor < 0))
            while (val < (dividend - divisor)) {
                result += 1;
                val += divisor;
            }
        else if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
            while (val < (dividend + divisor)) {
                result -= 1;
                val -= divisor;
            }
        return result;
    }
};