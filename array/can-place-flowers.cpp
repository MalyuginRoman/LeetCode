class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = flowerbed.size();
        int need = 2 * n + 1;
        bool result = false;
        int current = 0;
        if (flowerbed[0] == 0)
        {
            for (int i = 0; i < count; i++)
            {
                if (flowerbed[i] ==0)
                {
                    current += 1;
                    if (current == (need - 1))
                    {
                        result = true;
                        return result;
                    }
                }
                else
                {
                    current = 0;
                    break;
                }
            }
        }
        if (flowerbed[count] == 0)
        {
            for (int i = count; i > count; --i)
            {
                if (flowerbed[i] ==0)
                {
                    current += 1;
                    if (current == (need - 1))
                    {
                        result = true;
                        return result;
                    }
                }
                else
                {
                    current = 0;
                    break;
                }
            }
        }
        for (int i = 0; i < count; i++)
            {
                if (flowerbed[i] == 0)
                {
                    current += 1;
                    if (current == need)
                    {
                        result = true;
                        return result;
                    }
                }
                else
                    current = 0;
            }
        return result;
    }
};