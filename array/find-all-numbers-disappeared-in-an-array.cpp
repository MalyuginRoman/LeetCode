class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        /*vector<int> result;
        for (int i = 1; i < nums.size() + 1; i++)
            if (count(nums.begin(), nums.end(), i) == 0)
                result.push_back(i);
        return result;*/
        unordered_set<int> arr(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> ans;
        for(int i = 1; i <= n; i++) {
            if(arr.find(i) == arr.end()) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};