class Solution {
public:
    std::vector<int> pivotArray(std::vector<int>& nums, int pivot) {
        std::vector<int> result(nums.size(), 0);
        int left = 0, right = nums.size() - 1;
        for (int i = 0, j = nums.size() - 1; i < nums.size(); ++i, --j)
        {
            if (nums[i] < pivot)
            {
                result[left] = nums[i];
                left++;
            }
            if (nums[j] > pivot)
            {
                result[right] = nums[j];
                right--;
            }
        }
        while (left <= right)
        {
            result[left] = pivot;
            left++;
        }
        return result;
    }
};