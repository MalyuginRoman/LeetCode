class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int result = 0;
        int value = 0;
        for (int i = 0; i < gain.size(); i++)
        {
            value += gain[i];
            if (value > result)
                result = value;
        }
        return result;
    }
};