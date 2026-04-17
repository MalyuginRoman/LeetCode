class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> val = nums;
        int count = nums.size();
        if (count != 1)
        {
            k = k % count;
            int j = count - k;
            for (int i = 0; i < count; i++)
            {
                if (j < count)
                    nums[i] = val[j];
                else
                    nums[i] = val[j - count];
                j++;
            }
        }
    }
};