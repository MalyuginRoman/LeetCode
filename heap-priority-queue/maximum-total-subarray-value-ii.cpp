class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
    int vmin = INT_MAX, vmax = INT_MIN;
    for (int x : nums)
    {
        vmin = min(x, vmin);
        vmax = max(x, vmax);
    }
        return (long long) (vmax - vmin) * k;
    }
};