class Solution {
public:
    bool isMatch(string s, string p) {
        bool result = false;
        //if (p == "*") return true;
        //if (s.size() != p.size() && count(p.begin(),p.end(),'*') < 0) return false;
        int count = p.size();
        int val = -1;
        for (int i = 0; i < count; i++)
        {
            if (p[i] != s[i] || s[i] == '?')
                val++;
            if (p[i] == '*') return true;
        }
        if (val == p.size()) result = true;
        return result;
    }
};