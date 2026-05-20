class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> mix;
        vector<int> result;
        int value = 0;
        for (int i = 0; i < A.size(); i++)
        {
            int A1 = A[i];
            int B1 = B[i];
            if (count(mix.begin(), mix.end(), A1) < 1)
                mix.push_back(A1);
            else
                value++;
            if (count(mix.begin(), mix.end(), B1) < 1)
                mix.push_back(B1);
            else
                value++;
            result.push_back(value);
        }
        return result;
    }
};