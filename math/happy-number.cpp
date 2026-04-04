class Solution {
public:
    bool isHappy(int n) {
        bool result = false;
        auto val = 0;
        while (n > 0)
        {
            val += n % 10;
            n /= 10;
        }
        if (val % 10 == 0)
            result = true;
        return result;
    }
};