class Solution {
public:
    long long countCommas(long long n) {
        long long result = 0;
        long long val = 1.E+3;
        if (n >= val)
            result += (n - (val - 1));
        val = 1.E+6;
        if (n >= val)
            result += (n - (val - 1));
        val = 1.E+9;
        if (n >= val)
            result += (n - (val - 1));
        val = 1.E+12;
        if (n >= val)
            result += (n - (val - 1));
        val = 1.E+15;
        if (n >= val)
            result += (n - (val - 1));
        return result;
    }
};