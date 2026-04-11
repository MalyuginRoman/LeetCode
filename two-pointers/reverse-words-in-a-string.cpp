class Solution {
public:
    string reverseWords(string s) {
        char str = ' ';
        std::string result = "";
        std::string current = "";
        std::vector<std::string> words;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != str)
                current += s[i];
            else if (s[i] == str && current.size() > 0)
            {
                words.push_back(current);
                current = "";
            }
            if (i == s.size() - 1 && current.size() > 0)
            {
                words.push_back(current);
                current = "";
            }
        }
        bool isOk = false;
        for (int i = words.size() - 1; i >= 0; i--)
        {
            if (isOk) result += " ";
            result += words[i];
            isOk = true;
        }
        return result;
    }
};