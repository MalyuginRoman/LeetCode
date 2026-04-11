class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int curval = -101;
        int count = 0;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
            if (nums[i] != curval)
            {
                curval = nums[i];
                count += 1;
                result.push_back(nums[i]);
            }
        nums.clear();
        nums = result;
        return count;
    }
};