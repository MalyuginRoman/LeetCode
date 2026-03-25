class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> result;
        vector<int> value;
        int count = intervals.size();
        bool reWrite;
        if (count == 0)
            return result;
        else
        {
            for (int i = 0; i < count; i++)
            {
                if (intervals[i][1] < newInterval[0])
                {
                    value = intervals[i];
                    result.push_back(value);
                }
                else if (i < count && intervals[i][0] <= newInterval[1])
                {
                    while (i < count && intervals[i][0] <= newInterval[1])
                    {
                        newInterval[0] = min(newInterval[0], intervals[i][0]);
                        newInterval[1] = max(newInterval[1], intervals[i][1]);
                        i++;
                    }
                    value = newInterval;
                    result.push_back(value);
                    i--;
                }
                else if (newInterval[1] < intervals[i][0])
                {
                    value = intervals[i];
                    result.push_back(value);
                }
            }
        }
        return result;
    }
};