class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double xmin = points[0][0], xmax = points[0][0], 
               ymin = points[0][1], ymax = points[0][1];
        for (int i = 1; i < points.size(); i++)
        {
            xmin = points[i][0] < xmin ? points[i][0] : xmin;
            xmax = points[i][0] > xmax ? points[i][0] : xmax;
            ymin = points[i][1] < ymin ? points[i][1] : ymin;
            ymax = points[i][1] > ymax ? points[i][1] : ymax;
        }
        return ((xmax - xmin) * (ymax - ymin)) * 0.5;
    }
};