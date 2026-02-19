class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = flowerbed.size();
        bool result = false;
        int current = 0;
        for (int i = 1; i < (count - 1); i++)
            {
                if (i == 1 && flowerbed[i - 1] == 0)
                {
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
                    current += 1;
                    i += 1;
                    if (current == n)
                    {
                        result = true;
                        return result;
                    }
                }
                else if (i == (count - 1) && flowerbed[i + 1] == 0)
                {
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