class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int result = 0;
        int i = 1;
        int val;
        while (result == 0)
        {
            val = k * i;
            if (count(nums.begin(), nums.end(), val) == 0)
                result = val;
            else
                i++;
        }
        return result;
    }
};