class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
    int m = grid.size();
    if (m == 0) return grid;
    int n = grid[0].size();
    
    int totalElements = m * n;
    // If k is a multiple of total elements, the grid remains unchanged
    k %= totalElements;
    if (k == 0) return grid;

    vector<vector<int>> result(m, vector<int>(n));

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            // Calculate current flattened index
            int currentIdx = i * n + j;
            
            // Calculate new flattened index after k shifts
            int newIdx = (currentIdx + k) % totalElements;
            
            // Convert new flattened index back to 2D coordinates
            int newI = newIdx / n;
            int newJ = newIdx % n;
            
            result[newI][newJ] = grid[i][j];
        }
    }

    return result;
    }
};