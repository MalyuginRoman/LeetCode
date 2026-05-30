class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int val = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
                val++;
            else
            {
                if (ans < val)
                    ans = val;
                val = 0;
            }
        }
        if (ans < val)
            ans = val;
        return ans;
    }
};