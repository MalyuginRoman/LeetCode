class Solution {
public:
    bool judgePoint24(std::vector<int>& cards) {
        std::vector<double> nums(cards.begin(), cards.end());
        return solve(nums);
    }

private:
    bool solve(std::vector<double>& nums) {
        if (nums.size() == 1) {
            return abs(nums[0] - 24.0) < 1e-6;
        }
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) continue;

                std::vector<double> next;
                for (int k = 0; k < n; k++) {
                    if (k != i && k != j) next.push_back(nums[k]);
                }

                double a = nums[i], b = nums[j];
                std::vector<double> results = {a + b, a - b, b - a, a * b};
                if (abs(b) > 1e-6) results.push_back(a / b);
                if (abs(a) > 1e-6) results.push_back(b / a);

                for (double val : results) {
                    next.push_back(val);
                    if (solve(next)) return true;
                    next.pop_back();
                }
            }
        }
        return false;
    }
};