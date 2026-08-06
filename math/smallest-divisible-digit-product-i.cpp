class Solution {
public:
    int smallestNumber(int n, int t) {
        int result;
        bool isCalc = false;
        while (!isCalc)
        {
            int v1 = n/100;
            int v2 = (n%100)/10;
            int v3 = (n%100)%10;
            int val = n >= 100 ? v1 * v2 * v3 : n >= 10 ? v2 * v3 : v3;
            if (val%t == 0)
            {
                result = n;
                isCalc = true;
            }
            else
                n++;
        }
        return result;
    }
};