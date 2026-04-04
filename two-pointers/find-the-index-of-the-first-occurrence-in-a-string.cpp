class Solution {
public:
    int strStr(string haystack, string needle) {
        int val = needle.length();
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