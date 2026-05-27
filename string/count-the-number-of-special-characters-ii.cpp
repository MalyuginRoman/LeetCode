class Solution {
public:
    int numberOfSpecialChars(string word) {
        int result = 0;
        vector<char> chA = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        vector<char> chB = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
        vector<int> numA(chA.size(), 0);
        vector<int> numB(chB.size(), 0);
        vector<bool> bolA(chA.size(), false);
        vector<bool> bolB(chB.size(), false);
        for (int i = 0; i < word.size(); i++)
        {
            for (int j = 0; j < chA.size(); j++)
            {
                char val = word[i];
                char valA = chA[j];
                char valB = chB[j];
                if (val == valA)
                {
                    numA[j] = i;
                    bolA[j] = true;
                    break;
                }
                else if (val == valB && bolB[j] == false)
                {
                    numB[j] = i;
                    bolB[j] = true;
                    break;
                }
            }
        }
        for (int i = 0; i < numA.size(); i++)
        {
            if (numB[i] > numA[i] && bolA[i] == true)
                result++;
        }
        return result;
    }
};