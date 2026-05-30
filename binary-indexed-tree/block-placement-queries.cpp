class Solution {
public:
    vector<bool> getResults(vector<vector<int>>& queries) {
    std::set<int> obstacles;
    std::vector<bool> results;

    for (const auto& query : queries) {
        if (query[0] == 1) {
            // Type 1: add obstacle at position x
            obstacles.insert(query[1]);
        } else if (query[0] == 2) {
            // Type 2: check if block of size sz can be placed in [0, x]
            int x = query[1];
            int sz = query[2];

            bool canPlace = false;
            int prev = 0; // Start from origin

            // Iterate through obstacles in sorted order
            for (int obs : obstacles) {
                if (obs > x) break; // Obstacle is beyond the range, stop

                // Check gap between previous position and current obstacle
                int gap = obs - prev;
                if (gap >= sz) {
                    canPlace = true;
                    break;
                }
                prev = obs;
            }

            // Check final gap from last obstacle (or origin if no obstacles) to x
            if (!canPlace && (x - prev) >= sz) {
                canPlace = true;
            }

            results.push_back(canPlace);
        }
    }

    return results;
        
    }
};