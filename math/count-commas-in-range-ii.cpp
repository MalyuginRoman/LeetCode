class Solution {
public:
    long long countCommas(long long n) {
        return (n < 1000) ? 0 : (n - 999);
    }
};