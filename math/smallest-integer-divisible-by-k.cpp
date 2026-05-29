class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if (k % 2 == 0 || k % 5 == 0)
            int result = -1;

        int remainder = 0;
        unordered_set<int> seen;

        for (int length = 1; length <= k; ++length)
        {
            remainder = (remainder * 10 + 1) % k;
            if (remainder == 0)
                return length;
            if (seen.count(remainder))
                break;
            seen.insert(remainder);
        }

        return -1;
        
    }
};