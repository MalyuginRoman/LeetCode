class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int result = -1;
        int t = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int min_el = 1000000001, max_el = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if (j <= t && nums[j] > max_el)
                    max_el = nums[j];
                if (j >= t && nums[j] < min_el)
                    min_el = nums[j];
            }
            if ((max_el - min_el) <= k)
            {
                result = t;
                break;
            }
            t++;
        }
        return result;
    }
};