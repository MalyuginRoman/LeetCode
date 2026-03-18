class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;
        int result = 1;
        unsigned long int val = 10E+8;
        bool isOk = false;
        bool reev = false;
        while (!isOk)
        {
            unsigned long int current = val * val;
            if (current >= x && !reev)
            {
                result = val;
                val /= 10;
            }
            else if (current <= x)
            {
                result = val;
                val += 1;
                reev = true;
            }
            else if (current > x && reev)
                isOk = true;
        }
        return result;
    }
};