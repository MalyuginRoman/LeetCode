class Solution {
public:
    int strStr(string haystack, string needle) {
        int val = needle.length();
        if(haystack.length() < val) return -1;
        for(int i = 0; i <= haystack.length() - val; i++)
        {
            if(haystack.substr(i,val) == needle)
            {
                return i;
            }
        }
        return -1;        
    }
};