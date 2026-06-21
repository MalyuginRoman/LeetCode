class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int result = 0;
        int val = coins;
        sort(costs.begin(), costs.end());
        for (int i = 0; i < costs.size(); i++)
        {
            if (costs[i] <= val)
            {
                val -= costs[i];
                result++;
            }
            else
                break;
        }
        return result;
    }
};