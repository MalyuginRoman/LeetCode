class Solution {
public:
    int trailingZeroes(int n) {
        long long count = 0;
        while (n > 0)
        {
            n /= 5;
            count += n;
        }
        return count;
    }
};