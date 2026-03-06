class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {

        int ans = 0;
        int cap = capacity;
        for (int i = 0; i < plants.size(); i++) {

            if (plants[i] <= cap) {
                cap -= plants[i];
                ans++;
            } else {
                cap = capacity;
                ans += (i * 2) + 1;
                cap -= plants[i];
            }
        }
        return ans;
    }
};