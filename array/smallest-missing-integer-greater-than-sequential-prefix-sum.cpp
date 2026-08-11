class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int max_sum = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1] + 1)
                max_sum += nums[i];
            else
                break;
        }
        while (count(nums.begin(), nums.end(), max_sum) > 0)
            max_sum ++;
        return max_sum;
    }
};