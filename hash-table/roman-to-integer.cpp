class Solution {
public:
    int romanToInt(string s) {
        int count = s.size();
        int result = 0;
        const char* str1 = "I";
        for (int i = 0; i < count; i++)
        {
            if (strcmp(const char* s.at(i), const char* str1) == 0)
                result +=1;
        }
    }
};