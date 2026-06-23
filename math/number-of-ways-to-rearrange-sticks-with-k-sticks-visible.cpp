class Solution {
public:
    int rearrangeSticks(int n, int k) {
        const int MOD = 1000000007;
        vector<long long> prev(k + 1, 0);
        prev[0] = 1; // dp[0][0] = 1
        for (int i = 1; i <= n; i++)
        {
            vector<long long> curr(k + 1, 0);
            for (int j = 1; j <= min(i, k); j++)
                curr[j] = (prev[j-1] + (i - 1) * prev[j]) % MOD;
            prev = curr;
        }
        return static_cast<int>(prev[k]);
    }
};