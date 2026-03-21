class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        std::string a1 = "";
        std::string a2 = "";
        int result = 0;
        int count = s.size();
        if (count == 0) return result;
        for (int i = 0; i < count; i++)
        {
            char a = s[i];
            if (a1.size() == 0)
                a1 += a;
            else
            {
                int count1 = a1.size();
                for (int j = 0; j < count1; j++)
                {
                    char b = a1[j];
                    if (a != b)
                    {
                        if (j == count1 - 1)
                            a1 += a;
                    }
                    else
                    {
                        if (a1.size() > a2.size())
                            a2 = a1;
                        //{
                        a1 = "";
                        for (int k = j + 1; k < count1; k++)
                            a1 += a2[k];
                        a1 += a;
                        //}
                        //else
                        //    a1 = "";
                        break;
                    }
                }
            }
        }
        result = std::max(a1.size(),a2.size());
        return result;
    }
};