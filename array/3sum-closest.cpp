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
        if (target < 0)
            for (int i = 1; i < result.size(); i++)
                if (- answer - target < answer)
                    answer = result[i];
        else
            for (int i = 1; i < result.size(); i++)
                if (answer + target < answer)
                    answer = result[i];
        return answer;
    }
};