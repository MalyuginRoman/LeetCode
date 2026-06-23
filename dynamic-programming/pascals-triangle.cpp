class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        vector<int> val = {1};
        vector<int> pre;
        result.push_back(val);
        if (numRows > 1)
        {
            for (int i = 1; i < numRows; i++)
            {
                val.clear();
                val.push_back(1);
                if (i > 1)
                {
                    for (int j = 1; j < pre.size(); j++)
                        val.push_back(pre[j - 1] + pre[j]);
                }
                val.push_back(1);
                result.push_back(val);
                pre = val;
            }
        }
        return result;
    }
};