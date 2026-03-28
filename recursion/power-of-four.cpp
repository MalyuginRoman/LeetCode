class Solution {
public:
    bool isPowerOfFour(int n) {
        bool result = false;
        if (n == 1) return true;
        while (n / 4 > 0)
        {
            if (n / 4 <= 1 && n % 4 == 0)
            {
                result = true;
                break;
            }
            else if (n / 4 <= 1 && n % 4 != 0)
            {
                result = false;
                break;
            }
            n /= 4;
        }
        return result;
    }
};