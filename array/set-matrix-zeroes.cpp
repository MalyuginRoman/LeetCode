class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> i0;
        vector<int> j0;
        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j < matrix[i].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    i0.push_back(i);
                    j0.push_back(j);
                }
            }
            if (j0.size() == matrix[i].size()) break;
            if (i0.size() == matrix.size()) break;
        }
        for(int i = 0; i < matrix.size(); i++)
            for(int j = 0; j < matrix[i].size(); j++)
                for(int t = 0; t < i0.size(); t++)
                    for(int k = 0; k < j0.size(); k++)
                        if (i == i0[t] || j == j0[k])
                            matrix[i][j] = 0;
    }
};