class Solution {
public:
    std::vector<std::vector<int>> generateMatrix(int n) {
        std::vector<std::vector<int>> result(n, vector<int> (n));
        int Xmin = 0;
        int Ymin = 0;
        int Xmax = n;
        int Ymax = n;
        int count = n * n;
        int val = 0;
        std::vector<int> cur;
        while (count > 0)
        {
            for (int i = Xmin; i < Xmax; i++)
            {
                val++;
                result[Ymin][i] = val;
                count--;
                if (count == 0) return result;
            }
            Ymin++;
            for (int j = Ymin; j < Ymax; j++)
            {
                val++;
                result[j][Xmax-1] = val;
                count--;
            }
            Xmax--;
            for (int i = Xmax-1; i >= Xmin; i--)
            {
                val++;
                result[Ymax-1][i] = val;
                count--;
            }
            Ymax--;
            for (int j = Ymax-1; j >= Ymin; j--)
            {
                val++;
                result[j][Xmin] = val;
                count--;
            }
            Xmin++;
        }
        return result;
    }
};