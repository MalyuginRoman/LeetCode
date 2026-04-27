class Solution {
public:
    int compress(vector<char>& chars) {
        int result = 0;
        int count = chars.size();
        int val = 0;
        result++;
        for (int i = 0; i < count; i++)
        {
            char v1 = chars[i];
            int num = 0;
            while (i < count && chars[i] == v1)
            {
                num++;
                i++;
            }
            if (num == 1)
                chars[val++] = v1;
            else
            {
                chars[val++] = v1;
                string str = to_string(num);
                for (char dig : str) 
                    chars[val++] = dig;
            }
            i--;
        }
        chars.resize(val);
        return val;
    }
};