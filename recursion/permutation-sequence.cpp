class Solution {
public:
    string getPermutation(int n, int k) {
    // Precompute factorials: fact[i] = i!
    std::vector<int> fact(n, 1);
    for (int i = 1; i < n; ++i) {
        fact[i] = fact[i - 1] * i;
    }

    // Available digits in sorted order
    std::vector<int> nums;
    nums.reserve(n);
    for (int i = 1; i <= n; ++i) {
        nums.push_back(i);
    }

    std::string result;
    result.reserve(n);
    --k; // Convert to 0-based indexing

    // Determine each digit from left to right
    for (int i = n - 1; i >= 0; --i) {
        int idx = k / fact[i];  // Which block does k fall into?
        k %= fact[i];           // Update k for the remaining positions
        result.push_back(nums[idx] + '0');
        nums.erase(nums.begin() + idx); // Remove used digit
    }

    return result;
    }
};