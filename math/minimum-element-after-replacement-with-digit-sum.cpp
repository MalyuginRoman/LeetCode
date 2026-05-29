class Solution {
public:
    int minElement(vector<int>& nums) {
        int result;
        int val;
        int A1 = 10000, A2 = 1000, A3 = 100, A4 = 10;
        for (int i = 0; i < nums.size(); i++)
        {
            val = nums[i]/A1 + (nums[i]%A1)/A2 + ((nums[i]%A1)%A2)/A3 + (((nums[i]%A1)%A2)%A3)/A4 + (((nums[i]%A1)%A2)%A3)%A4;
            if (i == 0) result = val;
            if (val < result) result = val;
        }
        return result;
    }
};