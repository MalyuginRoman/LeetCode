class Solution {
public:
    int trap(vector<int>& height) {
        int result = 0;
        int count = height.size();
        vector<int> left = height;
        vector<int> right = height;
        int val;
        for (int i = 0; i < count; i++)
        {
            if (i == 0) val = height[i];
            else if (height[i] > val)
            {
                left[i] = height[i];
                val = height[i];
            }
            else if (height[i] < val)
            {
                left[i] = val;
            }
        }
        for (int i = count - 1; i >= 0; i--)
        {
            if (i == count - 1) val = height[i];
            else if (height[i] > val)
            {
                right[i] = height[i];
                val = height[i];
            }
            else if (height[i] < val)
            {
                right[i] = val;
            }
        }
        for (int i = 0; i < count; i++)
        {
            val = right[i] < left[i] ? right[i] : left[i];
            result += val - height[i];
        }
        return result;
    }
};