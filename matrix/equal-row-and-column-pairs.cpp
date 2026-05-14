class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int result = 0;
        vector<vector<int>> gridA;
        for (int i = 0; i < grid.size(); i++)
        {
            vector<int> gg;
            for (int j = 0; j < grid.size(); j++)
                gg.push_back(grid[j][i]);
            gridA.push_back(gg);
        }
        for (int i = 0; i < grid.size(); i++)
            for (int j = 0; j < grid.size(); j++)
                if (grid[i] == gridA[j])
                    result++;
        return result;
    }
};