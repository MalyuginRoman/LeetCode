#include <algorithm>
class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::vector<std::vector<int>> result;
        bool isWrite = false;
        sort(nums.begin(), nums.end());
        for (size_t i = 0; i < nums.size(); i++)
        {
            if(i > 0 && nums[i] == nums[i-1]) continue;
            for (size_t j = i + 1; j < nums.size(); j++)
            {
                if(i > 0 && nums[j] == nums[j-1]) continue;
                for (size_t k = j + 1; k < nums.size(); k++)
                {
                    if(i > 0 && nums[k] == nums[k-1]) continue;
                    if ((nums[i] + nums[j] + nums[k]) == 0)
                    {
                        if (result.size() == 0)
                            result.push_back({nums[i],nums[j],nums[k]});
                        else
                        {
                            for (size_t n = 0; n < result.size(); n++)
                            {
                                if (nums[i] == result[n][0] &&
                                    nums[j] == result[n][1] &&
                                    nums[k] == result[n][2])
                                    {
                                        isWrite = true;
                                        break;
                                    }
                                else
                                        isWrite = false;
                            }
                            if (!isWrite)
                                result.push_back({nums[i],nums[j],nums[k]});
                        }
                    }
                }
            }
        }
    return result;
    }
};