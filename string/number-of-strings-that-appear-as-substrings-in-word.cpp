class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = patterns.size();
        int result = 0;
        for (int i = 0; i < count; i++)
            if (word.find(patterns[i]) != std::string::npos)
                result++;
        return result;
    }
};