class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int count = nums.size();
        vector<int> l(count), r(count);
        int result = -1;
        int value = 0;
        for (int i = 0; i < count; i++)
        {
            value += nums[i];
            l[i] = value;
        }
        value = 0;
        for (int i = count - 1; i >= 0 ; i--)
        {
            value += nums[i];
            r[i] = value;
        }
        for (int i = 0; i < count; i++)
        {
            if (l[i] == r[i])
            {
                result = i;
                break;
            }
        }
        return result;
    }
};