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
                result += 1;
            if (s.at(i) == str2)
                result += 5;
            if (s.at(i) == str3)
                result += 10;
            if (s.at(i) == str4)
                result += 50;
            if (s.at(i) == str5)
                result += 100;
            if (s.at(i) == str6)
                result += 500;
            if (s.at(i) == str7)
                result += 1000;
        }
        return result;
    }
};