#include <algorithm>
class Solution
{
public:
    int threeSumClosest(vector<int>& nums, int target)
    {
        sort(nums.begin(), nums.end());
        int answer = (nums[0] + nums[1] + nums[2]);
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                for (int k = j + 1; k < nums.size(); k++)
                {
                    if ((nums[i] + nums[j] + nums[k]) == target)
                        return (nums[i] + nums[j] + nums[k]);
                    if (target < 0)
                    {
                        if ((nums[i] + nums[j] + nums[k]) < target)
                        {
                            if (abs(target - (nums[i] + nums[j] + nums[k])) < abs(target - answer))answer = (nums[i] + nums[j] + nums[k]); 
                        } 
                        else if ((nums[i] + nums[j] + nums[k]) > target)
                        {
                            if (abs(target - (nums[i] + nums[j] + nums[k])) < abs(target - answer)) answer = (nums[i] + nums[j] + nums[k]);
                        } 
                    }
                    else if (target == 0)
                    {
                        if (abs((nums[i] + nums[j] + nums[k])) < abs(answer)) answer = (nums[i] + nums[j] + nums[k]);
                    }
                    else if (target > 0)
                    {
                        if (abs(target - (nums[i] + nums[j] + nums[k])) < abs(target - answer)) answer = (nums[i] + nums[j] + nums[k]);
                    }
                }
            }
        }
    return answer;
    }
};