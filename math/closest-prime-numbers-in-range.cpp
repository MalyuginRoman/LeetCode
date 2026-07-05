class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int> result {-1, -1};
        vector<int> cur;
        bool isFull = false;
        for (int i = left; i <= right; i++)
        {
            bool isOk = false;
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    isOk = false;
                    break;
                }
                isOk = true;
            }
            if (i == 2)
                isOk = true;
            if (isOk)
                cur.push_back(i);
            if (cur.size() == 2)
                isFull = true;
            if (isFull)
            {
                result[0] = cur[0];
                result[1] = cur[1];
                int count = cur.size();
                for (int i = 1; i < (count - 1); i++)
                    if (cur[i + 1] - cur[i] < result[1] - result[0])
                    {
                        result[0] = cur[i];
                        result[1] = cur[i + 1];
                    }
                if (result[1] - result[0] <= 2)
                    break;
            }
        }
        return result;
    }
};