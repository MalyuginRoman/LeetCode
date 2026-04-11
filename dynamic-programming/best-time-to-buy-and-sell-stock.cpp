class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0;
        int max, min;
        int mincand;
        bool isOk = false;
        int count = prices.size();
        for (int i = 1; i < count; i++)
        {
            if (prices[i] - prices[i - 1] > 0)
            {
                if (!isOk)
                {
                    isOk = true;
                    min = prices[i - 1];
                    mincand = min;
                    max = prices[i];
                }
                else
                {
                    if (prices[i - 1] < mincand)
                        mincand = prices[i - 1];
                    if (max <= prices[i] && (prices[i] - mincand) >= (max - min))
                    {
                        max = prices[i];
                        min = mincand;
                    }
                    if (min > prices[i - 1] && (prices[i] - mincand) >= (max - min))
                    {
                        min = prices[i - 1];
                        max = prices[i];
                    }
                }
            }
        }
        if (isOk)
            result = max - min;
        return result;
    }
};