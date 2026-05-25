class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
    int n = s.size();
    
    // Early exit: can't reach if last char is '1'
    if (s[n - 1] == '1') return false;
    
    queue<int> q;
    q.push(0);
    
    vector<bool> visited(n, false);
    visited[0] = true;
    
    // Track the farthest index we've ever checked — prevents re‑checking
    int farthestChecked = 0;
    
    while (!q.empty()) {
        int i = q.front();
        q.pop();
        
        // Calculate valid jump bounds
        int left = i + minJump;
        int right = min(i + maxJump, n - 1);
        
        // Skip already-checked indices: start from max(left, farthestChecked + 1)
        for (int j = max(left, farthestChecked + 1); j <= right; ++j) {
            // Goal reached
            if (j == n - 1) return true;
            
            // Only proceed if cell is '0' and not visited
            if (s[j] == '0' && !visited[j]) {
                visited[j] = true;
                q.push(j);
            }
        }
        
        // Update the global farthest index checked
        farthestChecked = max(farthestChecked, right);
    }
    
    return false;
    }
};