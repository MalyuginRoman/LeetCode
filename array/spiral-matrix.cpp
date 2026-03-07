class Solution {
public:
    std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix) {
        std::vector<int> result;
        int Xmin = 0;
        int Ymin = 0;
        int Xmax = matrix[0].size();
        int Ymax = matrix.size();
        int count = Xmax * Ymax;
        while (count > 0)
        {
            for (int i = Xmin; i < Xmax; i++)
            {
                result.push_back(matrix[Ymin][i]);
                count--;
                if (count == 0) return result;
            }
            Ymin++;
            for (int j = Ymin; j < Ymax; j++)
            {
                result.push_back(matrix[j][Xmax-1]);
                count--;
                if (count == 0) return result;
            }
            Xmax--;
            for (int i = Xmax-1; i >= Xmin; i--)
            {
                result.push_back(matrix[Ymax-1][i]);
                count--;
                if (count == 0) return result;
            }
            Ymax--;
            for (int j = Ymax-1; j >= Ymin; j--)
            {
                result.push_back(matrix[j][Xmin]);
                count--;
                if (count == 0) return result;
            }
            Xmin++;
        }
        return result;
    }
};