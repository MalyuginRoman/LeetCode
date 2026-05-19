class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int result = -1;
        bool isOk = false;
        int j = 0;
        if (nums1[nums1.size() - 1] < nums2[0] ||
            nums2[nums2.size() - 1] < nums1[0])
            return result;
        while (!isOk)
        {
            for (int i = 0; i < nums1.size(); i++)
            {
                if (nums1[i] == nums2[j])
                {
                    result = nums1[i];
                    isOk = true;
                    break;
                }
            }
            j++;
            if (j == [nums2.size()])
                break; //return result;
        }
        return result;
    }
};