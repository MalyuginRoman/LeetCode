class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0;
        int max, min;
        int imax, imin;
        bool isOk = false;
        int count = prices.size();
        for (int i = 1; i < count; i++)
        {
            int a1 = prices[i];
            int a2 = prices[i - 1];
            if (prices[i] - prices[i - 1] > 0)
            {
                if (!isOk)
                {
                    isOk = true;
                    min = prices[i - 1];
                    imin = i - 1;
                    max = prices[i];
                    imax = i;
                }
                else
                {
                    if (max < prices[i] && imax < i)
                    {
                        max = prices[i];
                        imax = i;
                    }
                    if (min > prices[i - 1] && (prices[i] - prices[i - 1]) >= (max - min))
                    {
                        min = prices[i - 1];
                        imin = i - 1;
                        max = prices[i];
                        imax = i;
                    }
                }
            }
        }
        if (isOk)
            result = max - min;
        return result;
    }
};