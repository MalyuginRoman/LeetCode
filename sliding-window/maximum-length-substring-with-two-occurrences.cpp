class Solution {
public:
    int maximumLengthSubstring(string s) {
        int result = 0;
        vector<char> word;
        for (int i = 0; i < s.size(); i++)
        {
            char val = s[i];
            if (!word.empty())
            while (count(word.begin(), word.end(), val) > 1)
                word.erase(word.begin());
            word.push_back(val);
            int size = word.size();
            result = max(result, size);
        }
        return result;
    }
};