class Solution {
public:
    double myPow(double x, int n) {
        double result = 1;
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