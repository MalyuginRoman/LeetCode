class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums;
        for (int j = 0; j < nums.size(); j++)
            ans.push_back(nums[j]);
        return ans;
    }
};