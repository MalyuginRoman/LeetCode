class Solution {
public:
    bool isOk(int n1, int n2, int n3)
    {
        if ((n1 < n2 && n2 > n3) || (n1 > n2 && n2 < n3))
            return true;
        else
            return false;
    }
    int totalWaviness(int num1, int num2) {
        int result = 0;
        int n1, n2, n3, n4, n5;
        for (int i = num1; i <= num2; i++)
        {
            if (i / 10000 > 0)
            {
                n1 = i / 10000;
                n2 = (i % 10000) / 1000;
                n3 = ((i % 10000) % 1000) / 100;
                n4 = (((i % 10000) % 1000) % 100) / 10;
                n5 = (((i % 10000) % 1000) % 100) % 10;
                if (isOk(n1, n2, n3))
                    result++;
                if (isOk(n2, n3, n4))
                    result++;
                if (isOk(n3, n4, n5))
                    result++;
            }
            else if (i / 1000 > 0)
            {
                n1 = i / 1000;
                n2 = (i % 1000) / 100;
                n3 = ((i % 1000) % 100) / 10;
                n4 = ((i % 1000) % 100) % 10;
                if (isOk(n1, n2, n3))
                    result++;
                if (isOk(n2, n3, n4))
                    result++;
            }
            else if (i / 100 > 0)
            {
                n1 = i / 100;
                n2 = (i % 100) / 10;
                n3 = (i % 100) % 10;
                if (isOk(n1, n2, n3))
                    result++;
            }
        }
        return result;
    }
};