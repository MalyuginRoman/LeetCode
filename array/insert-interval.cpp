class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> result;

        for (size_t i{0}; i < intervals.size(); ++i)
        {
            if (newInterval[1] < intervals[i][0])
            {
                result.push_back(move(newInterval));
                move(begin(intervals) + i, end(intervals), back_inserter(result));
                return result;
            }
            else if (intervals[i][1] < newInterval[0])
                result.push_back(intervals[i]);
            else
                merge_interval(intervals[i], newInterval).swap(newInterval);
        }
        result.push_back(newInterval);
        return result;
    }

private:
    vector<int> merge_interval(const vector<int>& a,  const vector<int>& b) {
        return {min(a[0], b[0]), max(a[1], b[1])};
    }
};