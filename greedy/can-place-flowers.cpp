class Solution {
public:
    bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
        int count = flowerbed.size();
        bool result = false;
        int current = 0;
        if (n == 0)
        {
            result = true;
            return result;
        }
        if (n == 1 && count == 1 && flowerbed[0] == 0)
        {
            result = true;
            return result;
        }
        for (int i = 1; i < count; i++)
            {
                if (i == 1 && flowerbed[i] == 0 && flowerbed[i - 1] == 0)
                {
                    flowerbed[i - 1] = 1;
                    current += 1;
                    //i += 1;
                    if (current == n)
                    {
                        result = true;
                        return result;
                    }
                }
                else if (i == (count - 1) && flowerbed[i] == 0 && flowerbed[i - 1] == 0)
                {
                    flowerbed[count - 1] = 1;
                    current += 1;
                    i += 1;
                    if (current == n)
                    {
                        result = true;
                        return result;
                    }
                }
                else if (flowerbed[i - 1] == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0)
                {
                    flowerbed[i] = 1;
                    current += 1;
                    i += 1;
                    if (current == n)
                    {
                        result = true;
                        return result;
                    }
                }
            }
        return result;
    }
};