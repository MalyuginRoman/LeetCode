class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int result = 0;
        int mX = 0, mY = 0;
        int count = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            count = grid[i].size();
            for (int j = 0; j < grid[i].size(); j++)
            {
                if (grid[i][j] > 0)
                    result++;
                if (mX < grid[i][j])
                    mX = grid[i][j];
            }
            result += mX;
            mX = 0;
        }
        for (int j = 0; j < count; j++)
        {
            for (int i = 0; i < grid.size(); i++)
                if (mY < grid[i][j])
                    mY = grid[i][j];
            result += mY;
            mY = 0;
        }
        return result;
    }
};