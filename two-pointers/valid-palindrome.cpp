class Solution {
public:
    bool isPalindrome(string s) {
        string f1 = "";
        string f2 = "";
        for (int i = s.size(); i >= 0; i--)
        {
            char c = s[i];
            if ((48 <= int(c) && int(c) <= 57) ||
                (65 <= int(c) && int(c) <= 90) ||
                (97 <= int(c) && int(c) <= 122))
                {
                    if (65 <= int(c) && int(c) <= 90)
                        c = char(int(s[i]) + 32);
                    f1 += c;
                }
        }
        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            if ((48 <= int(c) && int(c) <= 57) ||
                (65 <= int(c) && int(c) <= 90) ||
                (97 <= int(c) && int(c) <= 122))
                {
                    if (65 <= int(c) && int(c) <= 90)
                        c = char(int(s[i]) + 32);
                    f2 += c;
                }
        }
        bool result = f1 == f2 ? true : false;
        return result;
    }
};