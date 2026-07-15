class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int result;
        int X1 = 0, X2 = 0;
        for (int i = 0; i < n; i++)
        {
            X1 += i * 2 + 1;
            X2 += (i + 1) * 2;
        }
        int div = X1 < X2 ? X1 : X2;
        for (int i = div; i > 0; i--)
        {
            if (X1 % i == 0 && X2 % i == 0)
            {
                result = i;
                break;
            }
        }
        return result;
    }
};