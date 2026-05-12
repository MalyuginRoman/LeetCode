class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v1, v2;
        vector<vector<int>> result;
        for (int i = 0; i < nums1.size(); i++)
            if (count(nums2.begin(), nums2.end(), nums1[i]) == 0 && 
                count(v1.begin(), v1.end(), nums1[i]) == 0)
                v1.push_back(nums1[i]);
        result.push_back(v1);
        for (int i = 0; i < nums2.size(); i++)
            if (count(nums1.begin(), nums1.end(), nums2[i]) == 0 && 
                count(v2.begin(), v2.end(), nums2[i]) == 0)
                v2.push_back(nums2[i]);
        result.push_back(v2);
        return result;
    }
};