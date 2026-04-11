class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0;
        int max, min;
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
                    max = prices[i];
                }
                else
                {
                    if (min > prices[i - 1])
                        min = prices[i - 1];
                    if (max < prices[i])
                        max = prices[i];
                }
            }
        }
        if (isOk)
            result = max - min;
        return result;
    }
};