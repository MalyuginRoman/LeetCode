class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int> result {-1, -1};
        vector<int> cur {-1, -1};
        int val = 0;
        for (int i = left; i <= right; i++)
        {
            bool isOk = true;
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    isOk = false;
                    break;
                }
            }
            if (isOk)
            {
                cur[val] = i;
                val++;
            }
            if (val == 2)
            {
                result = cur;
                break;
            }
        }
        return result;
    }
};