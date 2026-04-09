class Solution {
public:
    int hIndex(vector<int>& citations) {
        std::vector<int> h;
        int result = 0;
        for (int i = 0; i <= citations.size(); i++)
            h.push_back(0);
        for (int i = 0; i < citations.size(); i++)
            for (int j = 0; j <= citations.size(); j++)
            {
                if (citations[i] >= j)
                    h[j]++;
                else
                    break;
            }
        for (int i = 0; i <= citations.size(); i++)
            if (h[i] >= i) result = i;
        return result;
    }
};