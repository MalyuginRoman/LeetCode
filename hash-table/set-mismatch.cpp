class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result;
        int num, co = 0;
        for (int i = 0; i < nums.size(); i ++)
            if (count(nums.begin(), nums.end(), nums[i]) == 2)
            {
                num = nums[i];
                break;
            }
        for (int i = 0; i < nums.size(); i ++)
            if (nums[i] == num)
            {
                result.push_back(i + 1);
                co++;
                if (co == 2) break;
            }
        return result;
    }
};