class Solution {
public:
    int missingInteger(vector<int>& nums) {
        auto max_it = std::max_element(nums.begin(), nums.end());
        int max_val = *max_it;
        int max_sum = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1] + 1)
                max_sum += nums[i];
            else
                break;
        }
        int result = max_val > max_sum ? (max_val + 1) : max_sum;
        if (max_val == max_sum) result++;
        return result;
    }
};