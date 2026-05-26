class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> num;
        int result = 0;
        for (int i = 0; i < word.size(); i++)
        {
            char ch = word[i];
            int val = (int)ch;
            if (count(num.begin(), num.end(), val) < 1)
                num.push_back(val);
        }
        sort(num.begin(), num.end());
        for (int i = 0; i < num.size(); i++)
        {
            for (int j = i + 1; j < num.size(); j++)
                if (abs(num[i] - num[j]) == 32)
                    result++;
        }
        return result;
    }
};