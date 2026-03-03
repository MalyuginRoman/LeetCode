class Solution {
public:
    int minOperations(int n) {
        int result = 0;
        if (n == 3) result = 2;
        else
        {
            int count = n/2;
            if (n % 2 == 1) count += 1;
            for (int i = 0; i < count; i++)
                result += 2*i+1;
        }
        return result;   
    }
};