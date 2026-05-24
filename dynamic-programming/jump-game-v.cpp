class Solution {
public:
    int maxJumps(vector<int>& arr, int d) {
        int n = arr.size();
        vector<int> memo(n, -1); // memo[i] = max visits starting from index i
        int result = 0;
        
        // Try starting from each index
        for (int i = 0; i < n; ++i) {
            result = max(result, dfs(arr, d, i, memo));
        }
        return result;
    }
    
private:
    int dfs(const vector<int>& arr, int d, int i, vector<int>& memo) {
        // If already computed, return the result
        if (memo[i] != -1) {
            return memo[i];
        }
        
        int n = arr.size();
        int maxVisits = 1; // At least we visit the current index
        
        // Try jumping to the right (i + x)
        for (int x = 1; x <= d && i + x < n; ++x) {
            // If we encounter a blocking element (>= arr[i]), stop further jumps
            if (arr[i + x] >= arr[i]) {
                break;
            }
            // Valid jump: arr[i] > arr[i+x] and no blocking elements in between
            maxVisits = max(maxVisits, 1 + dfs(arr, d, i + x, memo));
        }
        
        // Try jumping to the left (i - x)
        for (int x = 1; x <= d && i - x >= 0; ++x) {
            // If we encounter a blocking element (>= arr[i]), stop further jumps
            if (arr[i - x] >= arr[i]) {
                break;
            }
            // Valid jump: arr[i] > arr[i-x] and no blocking elements in between
            maxVisits = max(maxVisits, 1 + dfs(arr, d, i - x, memo));
        }
        
        // Memoize and return
        memo[i] = maxVisits;
        return maxVisits;
    }
};