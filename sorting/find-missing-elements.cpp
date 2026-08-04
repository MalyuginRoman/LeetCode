class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> result;
        sort(nums.begin(), nums.end());
        int count = nums.size() - 1;
        int first = nums[0];
        int last = nums[count];
        if (last - first != count) 
        {
            for (int i = 1; i < (last - first); i++)
            {
                int value = first + i;
                if (std::count(nums.begin(), nums.end(), value) == 0)
                    result.push_back(value);
            }
        }
        return result;
    }
};