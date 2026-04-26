class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        bool result = false;
        int start = 0;
        int end = nums.size() - 1;
        for (int i = start; i < (end - 2); i++)
        {
            for (int j = (start + 1); j < (end - 1); j++)
            {
                for (int k = end; k > (start + 2); k--)
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