class Solution
{
public:
    int threeSumClosest(vector<int>& nums, int target)
    {
        vector<int> result;
        for (int i = 0; i < nums.size()-2; i++)
        {
            //for (int j = i + 1; j < nums.size(); j++)
            //{
                //for (int k = j + 1; k < nums.size(); k++)
                //{
                    int sum = nums[i] + nums[/*j*/i+1] + nums[/*k*/i+2];
                    result.emplace_back(sum);
                //}
            //}
        }
        int answer = result[0];
        for (int i = 0; i < result.size(); i++)
        {
            if (result[i] == target)
                return result[i];
            if (target < 0)
            {
                if (result[i] < target)
                {
                   if (abs(target - result[i]) < abs(target - answer)) answer = result[i]; 
                } 
                else if (result[i] > target)
                {
                    if (abs(target - result[i]) < abs(target - answer)) answer = result[i];
                } 
            }
            else if (target == 0)
            {
                if (abs(result[i]) < abs(answer)) answer = result[i];
            }
            else if (target > 0)
            {
                if (abs(target - result[i]) < abs(target - answer)) answer = result[i];
            }
        }
        return answer;
    }
};