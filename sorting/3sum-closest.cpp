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
        for (int i = 0; i < result.size(); i++)
        {
            if (result[i] == target)
                return result[i];
            if (target < 0)
            {
                if (result[i] < 0 && (target - result[i]) < answer) answer = result[i];
                else if (result[i] > 0 && (target + result[i]) < answer) answer = result[i];
            }
            else if (target == 0)
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