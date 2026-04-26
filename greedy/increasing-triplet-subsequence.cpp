class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        bool result = false;
        int start = 0;
        int end = nums.size() - 1;
        for (int i = start; i < (end - 2); i++)
        {
            for (int k = end; k > (i + 2); k--)
            {
                for (int j = (i + 1); j < (k - 1); j++)
                {
                    if (nums[i] < nums[j] && nums[j] < nums[k])
                    {
                        result = true;
                        return result;
                    }
                }
            }
        }
        return result;
    }
};