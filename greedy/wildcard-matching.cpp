class Solution {
public:
    bool isMatch(string s, string p) {
        return solve(s, p, s.size() - 1, p.size() - 1);
    }
    bool solve(string& s, string& p, int i, int j) {
        // both string and pattern finished
        if (i < 0 && j < 0) return true;
        // pattern finished but string remains
        if (i >= 0 && j < 0) return false;
        // string finished, remaining pattern must be '*'
        if (i < 0 && j >= 0)
        {
            while (j >= 0)
                if (p[j--] != '*') return false;
            return true;
        }
        // exact match or '?'
        if (s[i] == p[j] || p[j] == '?')
            return solve(s, p, i - 1, j - 1);
        // '*' matches empty or one character
        if (p[j] == '*')
            return solve(s, p, i - 1, j) || solve(s, p, i, j - 1);
        return false;
    }
};