class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        bool isOk = false;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] != ' ')
            {
                isOk = true;
                length++;
            }
            else if (isOk)
                break;
        }
        return length;
    }
};