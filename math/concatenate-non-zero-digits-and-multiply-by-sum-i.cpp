class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        long long val = 0;
        string num = to_string(n);
        for (char c : num) 
        {
            int d = c - '0';
            sum += d;
            if (d > 0)
                val = val * 10 + d;
        }
        return val * sum;
    }
};