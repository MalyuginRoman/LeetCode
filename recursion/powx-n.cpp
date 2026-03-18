class Solution {
public:
    double myPow(double x, int n) {
        double result = 1;
        if (n == INT_MAX) return (x == 1) ? 1 : (x == -1) ? -1 : 0;
        if (n == INT_MIN) return (x == 1 || x == -1) ? 1 : 0;
        if (x == 1) return result;
        if (n > 0)
        {
            for (int i = 0; i < n; i++)
                result *= x;
        }
        else if (n < 0)
        {
            for (int i = 0; i < abs(n); i++)
                result *= x;
            result = 1/result;
        }
        return result;
    }
};