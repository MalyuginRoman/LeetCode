class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int c1 = word1.size();
        int c2 = word2.size();
        string result = "";
        int c3 = c1 > c2 ? c1 : c2;
        for (int i = 0; i < c3; i++)
        {
            if (i < c1) result += word1[i];
            if (i < c2) result += word2[i];
        }
        return result;
    }
};