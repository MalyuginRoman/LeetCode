class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int count = temperatures.size();
        vector<int> result(count, - 9999);
        for (int i = count - 1; i >= 0; i--)
        {
            if (i == count - 1)
                result[i] = 0;
            else if (temperatures[i] == temperatures[i + 1] && result[i + 1] != 0)
                result[i] = result[i + 1] + 1;
            else
            {
                int val = 0;
                for (int j = i + 1; j < count; j++)
                {
                    if (temperatures[i] < temperatures[j])
                    {
                        val++;
                        break;
                    }
                    if (j != count - 1)
                        val++;
                    else if (j == count - 1)
                        val = 0;
                }
                result[i] = val;
            }
        }
        return result;
    }
};