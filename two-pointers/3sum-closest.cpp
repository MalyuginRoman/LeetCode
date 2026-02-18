class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                for (int k = j + 1; k < nums.size(); k++)
                {
                    int sum = nums[i] + nums[j] + nums[k];
                    result.push_back(sum);
                }
            }
        }
        int answer = result[0];
        for (int i = 1; i < result.size(); i++)
        {
            if (answer == target)
            {
                answer = result[i];
                return answer;
            }
            else if (target < 0)
            {
                if (/*(result[i] < target) && (target - result[i]) < answer) answer = result[i];
                else if ((result[i] > target) &&*/ (result[i] - target) < answer) answer = result[i];
            }
            else if (target = 0)
            {
                if (abs(result[i]) < answer) answer = result[i];
            }
            else if (target > 0)
            {
                if (abs(target - result[i]) < answer) answer = result[i];
            }
        }
        return answer;
    }
};