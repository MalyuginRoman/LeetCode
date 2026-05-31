class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        bool result = true;
        unsigned int val = mass;
        sort(asteroids.begin(), asteroids.end());
        for (int i = 0; i < asteroids.size(); i++)
        {
            if (val >= asteroids[i])
            {
                if (val < INT_MAX)
                    val += asteroids[i];
            }
            else
            {
                result = false;
                break;
            }
        }
        return result;
    }
};