class Solution {
public:
    int romanToInt(string s) {
        int count = s.size();
        int result = 0;
        const char* str1 = 'I';
        for (int i = 0; i < count; i++)
        {
            if (&s.at(i) == str1)
                result += 1;
        }
        return result;
    }
};