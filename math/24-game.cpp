class Solution {
public:
    bool judgePoint24(std::vector<int>& cards) {
        bool result = false;
        sort(cards.begin(), cards.end());
        std::vector<double> a1;
        std::vector<double> a2;
        for (int i = 3; i >= 0; i--)
        {
            for (int j = 3; j >= 0; j--)
            {
                if (j != i)
                {
                    a1.push_back(cards[i] + cards[j]);
                    a1.push_back(cards[i] - cards[j]);
                    a1.push_back(cards[i] * cards[j]);
                    a1.push_back(cards[i] / cards[j]);
                    for (int k = 3; k >= 0; k--)
                        if (k != i && k != j)
                            for (int t = 3; t >= 0; t--)
                                if (t != i && t != j && t != k)
                                {
                                    a2.push_back(cards[k] + cards[t]);
                                    a2.push_back(cards[k] - cards[t]);
                                    a2.push_back(cards[k] * cards[t]);
                                    a2.push_back(cards[k] / cards[t]);
                                    for (int l = 0; l < a2.size(); l++)
                                    {
                                        for (int m = 0; m < a2.size(); m++)
                                        {
                                            if (abs((a1[l] + a2[m]) - 24) < 1e-6) return true;
                                            else if (abs((a1[l] - a2[m]) - 24) < 1e-6) return true;
                                            else if (abs((a1[l] * a2[m]) - 24) < 1e-6) return true;
                                            else if (abs((a1[l] / a2[m]) - 24) < 1e-6) return true;
                                        }
                                    }
                                    a2.clear();
                                }
                    a1.clear();
                }
            }
        }
        return result;
    };
};