class Solution {
public:
    string reverseVowels(string s) {
        vector<int> numi;
        vector<char> numc;
        for (int i = 0; i < s.size(); i++)
            if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' ||
                s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' ||
                s[i] == 'u' || s[i] == 'U')
                {
                    numi.push_back(i);
                    numc.push_back(s[i]);
                }
        for (int i = 0; i < numi.size() / 2; i++)
        {
            char val1 = numc[i];
            char val2 = numc[numi.size() - 1 - i];
            numc[i] = val2;
            numc[numi.size() - 1 - i] = val1;
        }
        string result = "";
        int vali = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (i != numi[vali])
                result += s[i];
            else 
            {
                result += numc[vali];
                vali++;
            }
        }
        return result;
    }
};