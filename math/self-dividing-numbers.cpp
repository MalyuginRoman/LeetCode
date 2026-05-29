class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        bool isOk;
        for (int i = left; i <= right; i++)
        {
            isOk = true;
            vector<int> num;
            if (i == 10000) num.push_back(1);
            if (i >= 1000)
            {
                int a = (i%10000)/1000;
                if (a == 0)
                    isOk = false;
                else
                    num.push_back(a);
            }
            if (i >= 100)
            {
                int a = ((i%10000)%1000)/100;
                if (a == 0)
                    isOk = false;
                else
                    num.push_back(a);
            }
            if (i >= 10)
            {
                int a = (((i%10000)%1000)%100)/10;
                if (a == 0)
                    isOk = false;
                else
                    num.push_back(a);
            }
                int a = (((i%10000)%1000)%100)%10;
                if (a == 0)
                    isOk = false;
                else
                    num.push_back(a);
            int val = 0;
            if (isOk)
            {
                for (int j = 0; j < num.size(); j++)
                {
                    if (i % num[j] == 0)
                        val++;
                    if (val == num.size())
                        result.push_back(i);
                }
            }
        }
        return result;
    }
};