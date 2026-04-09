class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int max = 0;
        for(int i=0; i<citations.size(); i++)
        {
            if(citations[i] >= (n-i))
            {
                int ans = n-i;
                if(ans > max)
                    max=ans;
            }
        }
        return max;
    }
};