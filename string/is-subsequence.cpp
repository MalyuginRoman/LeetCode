class Solution {
public:
    bool isSubsequence(string s, string t) {
        int cc = s.size();
        vector<bool> result (cc, false);
        for (int i = 0; i < t.size(); i++)
            for (int j = 0; j < s.size(); j++)
                if (t[i] == s[j])
                {
                    result[j] = true;
                    break;
                }
        if (count(result.begin(), result.end(), false) > 0)
            return false;
        else
            return true;
    }
};