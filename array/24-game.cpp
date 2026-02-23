class Solution {
public:
    bool judgePoint24(std::vector<int>& cards) {
        bool result = false;
        sort(cards.begin(), cards.end());
        std::vector<double> a1;
        std::vector<double> a2;
        std::vector<double> a3;
        for (int i = 3; i >= 0; i--)
        {
            for (int j = 3; j >= 0; j--)
            {
                if (j != i)
                {
                    a1.push_back(cards[i] + cards[j]);
                    a1.push_back(cards[i] - cards[j]);
                    a1.push_back(cards[j] - cards[i]);
                    a1.push_back(cards[i] * cards[j]);
                    if (abs(cards[i]) > 0) a1.push_back(cards[j] / cards[i]);
                    if (abs(cards[j]) > 0) a1.push_back(cards[i] / cards[j]);
                    for (int k = 3; k >= 0; k--)
                        if (k != i && k != j)
                            for (int t = 3; t >= 0; t--)
                                if (t != i && t != j && t != k)
                                {
                                    for (int l = 0; l < a1.size(); l++)
                                    {
                                        a3.push_back(cards[t]);
                                        a3.push_back(cards[k]);
     if ((abs(a3[0] - a1[l]) > 1e-6) && abs((a3[1] / (a3[0] - a1[l])) - 24) < 1e-6) return true;
else if ((abs(a3[0] - a1[l]) > 1e-6) && abs((a3[1] * (a3[0] - a1[l])) - 24) < 1e-6) return true;
else if ((abs(a3[1])         > 1e-6) && abs(((a3[0] - a1[l]) / a3[1]) - 24) < 1e-6) return true;
else if ((abs(a3[1])         > 1e-6) && abs(((a3[0] - a1[l]) * a3[1]) - 24) < 1e-6) return true;
else if ((abs(a3[0] + a1[l]) > 1e-6) && abs((a3[1] / (a3[0] + a1[l])) - 24) < 1e-6) return true;
else if ((abs(a3[0] + a1[l]) > 1e-6) && abs((a3[1] * (a3[0] + a1[l])) - 24) < 1e-6) return true;
else if ((abs(a3[1])         > 1e-6) && abs(((a3[0] + a1[l]) / a3[1]) - 24) < 1e-6) return true;
else if ((abs(a3[1])         > 1e-6) && abs(((a3[0] + a1[l]) * a3[1]) - 24) < 1e-6) return true;
else if ((abs(a1[l] - a3[0]) > 1e-6) && abs((a3[1] / (a1[l] - a3[0])) - 24) < 1e-6) return true;
else if ((abs(a1[l] - a3[0]) > 1e-6) && abs((a3[1] * (a1[l] - a3[0])) - 24) < 1e-6) return true;
else if ((abs(a3[1])         > 1e-6) && abs(((a1[l] - a3[0]) / a3[1]) - 24) < 1e-6) return true;
else if ((abs(a3[1])         > 1e-6) && abs(((a1[l] - a3[0]) * a3[1]) - 24) < 1e-6) return true;
else if ((abs(a1[l] + a3[0]) > 1e-6) && abs((a3[1] / (a1[l] + a3[0])) - 24) < 1e-6) return true;
else if ((abs(a1[l] + a3[0]) > 1e-6) && abs((a3[1] * (a1[l] + a3[0])) - 24) < 1e-6) return true;
else if ((abs(a3[1])         > 1e-6) && abs(((a1[l] + a3[0]) / a3[1]) - 24) < 1e-6) return true;
else if ((abs(a3[1])         > 1e-6) && abs(((a1[l] + a3[0]) * a3[1]) - 24) < 1e-6) return true;
                                        a3.clear();
                                    }
                                    a2.push_back(cards[k] + cards[t]);
                                    a2.push_back(cards[k] - cards[t]);
                                    a2.push_back(cards[t] - cards[k]);
                                    a2.push_back(cards[k] * cards[t]);
                                    if (abs(cards[t]) > 1e-6) a2.push_back(cards[k] / cards[t]);
                                    if (abs(cards[k]) > 1e-6) a2.push_back(cards[t] / cards[k]);
                                    for (int l = 0; l < a1.size(); l++)
                                    {
                                        for (int m = 0; m < a2.size(); m++)
                                        {
                                            if (abs((a1[l] + a2[m]) - 24) < 1e-6) return true;
                                            else if (abs((a1[l] - a2[m]) - 24) < 1e-6) return true;
                                            else if (abs((a2[m] - a1[l]) - 24) < 1e-6) return true;
                                            else if (abs((a1[l] * a2[m]) - 24) < 1e-6) return true;
                                            else if (abs((a1[l] / a2[m]) - 24) < 1e-6) return true;
                                            else if (abs((a2[m] / a1[l]) - 24) < 1e-6) return true;
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