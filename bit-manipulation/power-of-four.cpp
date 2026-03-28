class Solution {
public:
    bool isPowerOfFour(int n) {
        bool result = false;
        double val = 1;
        while (val < n)
        {
            val *= 4;
        }
        if (val - n == 0)
            result = true;
        else if (val - n != 0)
            result = false;
        return result;
    }
};