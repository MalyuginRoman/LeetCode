class Solution {
public:
    bool isPalindrome(int x) {
        string num = to_string(x);
        int count = num.size() - 1;
        bool result = true;
        for (int i = 0; i <= count/2; i++)
            if (num[i] != num[count - i])
            {
                result = false;
                break;
            }
        return result;
    }
};