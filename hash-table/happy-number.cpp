class Solution {
public:
    bool isHappy(int n) {
        bool result = false;
        auto val = 0;
        while (n > 0)
        {
            val += (n % 10) * (n % 10);
            n /= 10;
            if (val > 9 && n == 0)
            {
                n = val;
                val = 0;
            }
        }
        if (val % 10 == 1 || val % 10 == 7)
            result = true;
        return result;
    }
};