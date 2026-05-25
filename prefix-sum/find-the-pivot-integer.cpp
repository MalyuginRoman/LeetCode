class Solution {
public:
    int pivotInteger(int n) {
        int result = -1;
        vector<int> A(n);
        vector<int> B(n);
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                A[i] = (i + 1);
                B[n - 1] = (n);
            }
            else
            {
                A[i] = (A[i - 1] + (i + 1));
                B[n - i - 1] = (B[n - i] + (n - i));
            }
        }
        for (int i = 0; i < n; i++)
            if (A[i] == B[i])
            {
                result = i + 1;
                break;
            }
        return result;
    }
};