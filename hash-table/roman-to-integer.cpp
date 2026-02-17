class Solution {
public:
    int romanToInt(string s) {
        int count = s.size();
        int result = 0;
        char str1 = 'I';
        char str2 = 'V';
        char str3 = 'X';
        char str4 = 'L';
        char str5 = 'C';
        char str6 = 'D';
        char str7 = 'M';
        for (int i = 0; i < count; i++)
        {
            if (s.at(i) == str1)
            {
                if (i < (count - 1) && s.at(i + 1) == str2)
                {
                    result += 4;
                    i++;
                }
                else if (i < (count - 1) && s.at(i + 1) == str3)
                {
                    result += 9;
                    i++;
                }
                else
                    result += 1;
            }
            else if (s.at(i) == str2)
                result += 5;
            else if (s.at(i) == str3)
            {
                if (i < (count - 1) && s.at(i + 1) == str4)
                {
                    result += 40;
                    i++;
                }
                else if (i < (count - 1) && s.at(i + 1) == str5)
                {
                    result += 90;
                    i++;
                }
                else
                    result += 10;
            }
            else if (s.at(i) == str4)
                result += 50;
            else if (s.at(i) == str5)
            {
                if (i < (count - 1) && s.at(i + 1) == str6)
                {
                    result += 400;
                    i++;
                }
                else if (i < (count - 1) && s.at(i + 1) == str7)
                {
                    result += 900;
                    i++;
                }
                else
                    result += 100;
            }
            else if (s.at(i) == str6)
                result += 500;
            else if (s.at(i) == str7)
                result += 1000;
        }
        return result;
    };
};