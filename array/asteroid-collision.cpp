class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int count = asteroids.size();
        if (count < 2)
            return asteroids;

        bool isP = false;
        bool isN = false;
        vector<int> value1;
        for (int i = 0; i < count; i++)
        {
            value1.push_back(asteroids[i]);
            if (asteroids[i] > 0) isP = true;
            if (asteroids[i] < 0) isN = true;
        }
        if (!isN || !isP)
            return value1;

        vector<int> value2;
        bool isOk = false;
        while(!isOk)
        {
            isP = false;
            isN = false;
            count = value1.size();
            if (count < 2)
                return value1;
            for (int i = 1; i < count; i++)
            {
                int x1 = value1[i -1];
                int x2 = value1[i];
                if (((x1 > 0) && (x2 > 0)) || ((x1 < 0) && (x2 < 0)))
                {
                    value2.push_back(x1);
                    if (x1 > 0) isP = true;
                    if (x1 < 0) isN = true;
                }
                if ((x1 > 0) && (x2 < 0))
                {
                    if (abs(x1) > abs(x2))
                    {
                        value2.push_back(x1);
                        if (x1 > 0) isP = true;
                        if (x1 < 0) isN = true;
                        i++;
                    }
                    else if (abs(x1) < abs(x2))
                    {
                        value2.push_back(x2);
                        if (x2 > 0) isP = true;
                        if (x2 < 0) isN = true;
                        i++;
                    }
                    else if (abs(x1) == abs(x2))
                    {
                        i++;
                    }
                }
                if ((x1 < 0) && (x2 > 0))
                {
                    value2.push_back(x1);
                    //value2.push_back(x2);
                    //i++;
                }
                if (i == (count - 1))
                {
                    value2.push_back(value1[i]);
                    if (x2 > 0) isP = true;
                    if (x2 < 0) isN = true;
                }
            }
            if (!isN || !isP || value2.size() == 0 || value1.size() == value2.size())
                isOk = true;
            else
            {
                value1.clear();
                count = value2.size();
                for (int i = 0; i < count; i++)
                    value1.push_back(value2[i]);
                value2.clear();
            }
        }
        return value2;
    }
};