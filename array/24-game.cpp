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
                        if (k != i || k != j)
                            for (int t = 3; t >= 0; t--)
                                if (t != i || t != j || t != k)
                                {
                                    a2.push_back(cards[k] + cards[t]);
                                    a2.push_back(cards[k] - cards[t]);
                                    a2.push_back(cards[k] * cards[t]);
                                    a2.push_back(cards[k] / cards[t]);
                                }
                }
            }
        }
        for (int i = 0; i < a1.size(); i++)
        {
            for (int j = 0; j < a2.size(); j++)
            {
                if (j != i)
                {
                    if (abs((a1[i] + a2[j]) - 24) < 1e-6) return true;
                    else if (abs((a1[i] - a2[j]) - 24) < 1e-6) return true;
                    else if (abs((a1[i] * a2[j]) - 24) < 1e-6) return true;
                    else if (abs((a1[i] / a2[j]) - 24) < 1e-6) return true;
                }
            }
        }
        return result;
    };
};