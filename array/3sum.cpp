#include <algorithm>
class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::vector<std::vector<int>> result;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                for (int k = j + 1; k < nums.size(); k++)
                {
                    if ((nums[i] + nums[j] + nums[k]) == 0)
                    {
                        if (result.size() == 0)
                            result.push_back({nums[i],nums[j],nums[k]});
                        else
                        {
                            int last = result.size()-1;
                            if (nums[i] == result[last][0] &&
                                nums[j] == result[last][1] &&
                                nums[k] == result[last][2])
                                    break;
                            else
                                result.push_back({nums[i],nums[j],nums[k]});
                        }
                    }
                }
            }
        }
    return result;
    }
};