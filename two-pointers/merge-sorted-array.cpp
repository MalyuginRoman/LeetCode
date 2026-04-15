class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = m; i < (m + n); i++)
            nums1[i] = nums2[i - m];
        int k = 0;
        while (k < m)
        {
            for (int i = 1; i < (m + n); i++)
            {
                if (nums1[i] < nums1[i - 1])
                {
                    int val = nums1[i];
                    nums1[i] = nums1[i - 1];
                    nums1[i - 1] = val;
                }
            }
            k++;
        }
    }
};