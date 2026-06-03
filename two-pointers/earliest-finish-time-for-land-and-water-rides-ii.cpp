class Solution {
public:
    int calc(vector<int>& l1, vector<int>& d1, vector<int>& l2, vector<int>& d2)
    {
        int val1 = INT_MAX;
        for (int i = 0; i < l1.size(); i++)
            val1 = min(val1, l1[i]+d1[i]);
        int val2 = INT_MAX;
        for (int i = 0; i < l2.size(); i++)
            val2 = min(val2, max(val1, l2[i]) + d2[i]);
        return val2;
    }
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        return min(calc(landStartTime, landDuration, waterStartTime, waterDuration), calc(waterStartTime, waterDuration, landStartTime, landDuration));
    }
};