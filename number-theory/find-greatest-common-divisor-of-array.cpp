class Solution {
public:
    int findGCD(vector<int>& nums) {
        int result;
        int min = INT_MAX;
        int max = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < min) min = nums[i];
            if (nums[i] > max) max = nums[i];
        }
        for (int i = max; i > 0; i--)
            if (min % i == 0 && max % i == 0)
            {
                result = i;
                break;
            }
        return result;
    }
};