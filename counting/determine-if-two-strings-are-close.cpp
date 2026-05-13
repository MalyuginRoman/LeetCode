class Solution {
public:
    bool closeStrings(string word1, string word2) {
        bool result = true;
        if (word1.size() != word2.size())
            result = false;
            
        vector<char> w1, w2;
        vector<int> s1, s2;
        for (int i = 0; i < word1.size(); i++)
        {
            char vtf1 = word1[i];
            char vtf2 = word2[i];
            int p1, p2;
            auto it1 = find(w1.begin(), w1.end(), vtf1);
            if (it1 != w1.end())
            {
                p1 = distance(w1.begin(), it1);
                s1[p1] += 1;
            }
            else
            {
                p1 = distance(w1.begin(), w1.end());
                w1.push_back(word1[i]);
                s1.push_back(1);
            }
            auto it2 = find(w2.begin(), w2.end(), vtf2);
            if (it2 != w2.end())
            {
                p2 = distance(w2.begin(), it2);
                s2[p2] += 1;
            }
            else
            {
                p2 = distance(w2.begin(), w2.end());
                w2.push_back(word2[i]);
                s2.push_back(1);
            }
        }
        if (s1.size() != s2.size())
            result = false;
        for (int i = 0; i < s1.size(); i++)
            if (count(s1.begin(), s1.end(), s1[i]) != count(s2.begin(), s2.end(), s1[i]))
            {
                result = false;
                break;
            }
        return result;
    }
};