class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        for (int i = 1; i < nums.size() + 1; i++)
            if (count(nums.begin(), nums.end(), i) == 0)
                result.push_back(i);
        return result;
    }
};