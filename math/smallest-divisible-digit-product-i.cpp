class Solution {
public:
    int smallestNumber(int n, int t) {
        int result;
        bool isCalc = false;
        while (!isCalc)
        {
            int val = n >= 100 ? n/100 * (n%100)/10 * (n%100)%10 : n >= 10 ? n/10 * n%10 : n%10;
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