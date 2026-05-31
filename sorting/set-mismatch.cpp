class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result (2, 0);
        bool isOk1 = false;
        bool isOk2 = false;
        int count = nums.size() + 1;
        vector<int> numN (count, 0);
        sort(nums.begin(), nums.end());
        for (int i = 0; i < (count - 1); i ++)
            numN[nums[i]] += 1;
        for (int i = 1; i < count; i ++)
        {
            if (numN[i] == 2)
            {
                result[0] = i;
                isOk1 = true;
            }
            if (numN[i] == 0)
            {
                result[1] = i;
                isOk2 = true;
            }
            if (isOk1 && isOk2)
                break;
        }
        return result;
    }
};