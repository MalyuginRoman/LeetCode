class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        int count1 = nums1.size();
        double sum1 = 0;
        double ave1 = 0;
        double a = 0;
        if (count1 > 0)
        {
            a++;
            if (count1 > 1)
            {
                for (int i = 0; i < count1; i++)
                    sum1 += nums1[i];
                ave1 = sum1/count1;
            }
            else
                ave1 = nums1[0];
        }
        int count2 = nums2.size();
        double sum2 = 0;
        double ave2 = 0;
        if (count2 > 0)
        {
            a++;
            if (count2 > 1)
            {
                for (int i = 0; i < count2; i++)
                    sum2 += nums2[i];
                ave2 = sum2/count2;
            }
            else
                ave2 = nums2[0];
        }
        double result = (ave1 + ave2) / a;
        return result;
    }
};