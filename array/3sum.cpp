class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        for (int i = 0; i < nums.size(); i++)
        for (int j = 0; j < nums.size(); j++)
        for (int k = 0; k < nums.size(); k++)
        {
            if (i != j && i != k && j != k && (nums[i]+nums[j]+nums[k]) == 0)
            {
                vector<int> value;
                value.push_back(nums[i]);
                value.push_back(nums[j]);
                value.push_back(nums[k]);
                sort(value.begin(), value.end());
                if (count(result.begin(), result.end(), value) == 0)
                    result.push_back(value);
            }
        }
        return result;
    }
};