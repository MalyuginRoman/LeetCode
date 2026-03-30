class Solution {
public:
    bool isPowerOfThree(int n) {
        bool result = false;
        double val = 1;
        while (val < n)
            val *= 3;
        if (val - n == 0)
            result = true;
        else if (val - n != 0)
            result = false;
        return result;
    }
};