class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> num (5);
        int count = text.size();
        for (char a : text)
        {
            if (a == 'b')
                num[0] += 1;
            else if (a == 'a')
                num[1] += 1;
            else if (a == 'l')
                num[2] += 1;
            else if (a == 'o')
                num[3] += 1;
            else if (a == 'n')
                num[4] += 1;
        }
        num[2] /= 2;
        num[3] /= 2;
        sort(num.begin(),num.end());
        return num[0];
    }
};