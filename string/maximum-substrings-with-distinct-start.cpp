class Solution {
public:
    int maxDistinct(string s) {
        int result = 0;
        vector<char> lit;
        bool write = true;
        int count = s.size();
        for (int i = 0; i < count; i++)
        {
            int l_size = lit.size();
            for (int j = 0; j < l_size; j++)
            {
                if (s[i] == lit[j])
                {
                    write = false;
                    break;
                }
            }
            if(write) lit.push_back(s[i]);
            write = true;
        }
        result = lit.size();
        return result;
        
    }
};