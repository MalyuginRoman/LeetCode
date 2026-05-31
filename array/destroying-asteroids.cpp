class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        bool result = true;
        sort(asteroids.begin(), asteroids.end());
        for (int i = 0; i < asteroids.size(); i++)
        {
            if (mass >= asteroids[i])
                mass += asteroids[i];
            else
            {
                result = false;
                break;
            }
        }
        return result;
    }
};