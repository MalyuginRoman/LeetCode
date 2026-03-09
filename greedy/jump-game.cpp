class Solution {
public:
    bool canJump(vector<int>& nums) {
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == 0) return false;
        }
        return true;
    }
};