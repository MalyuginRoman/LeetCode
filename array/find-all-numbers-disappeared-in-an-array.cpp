class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        /*vector<int> result;
        for (int i = 1; i <= nums.size(); i++)
            if (find(nums.begin(), nums.end(), i) == nums.end())
                result.push_back(i);
        return result;*/
        unordered_set<int> arr(nums.begin(), nums.end());
        vector<int> ans;
        for(int i = 1; i <= nums.size(); i++)
            if(arr.find(i) == arr.end())
                ans.push_back(i);
        return ans;
    }
};