class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        auto maxEl = max_element(candies.begin(), candies.end());
        int count = candies.size();
        vector<bool> result (count, false);
        for (int i = 0; i < count; i++)
            if (candies[i] + extraCandies >= *maxEl)
                result[i] = true;
        return result;
    }
};