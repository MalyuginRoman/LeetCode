class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int count = arr.size();
        vector<int> sort_arr = arr;
        sort(sort_arr.begin(),sort_arr.end());
        int rank = 1;
        vector<int> rank_arr, result;
        rank_arr.push_back(rank);
        for (int i = 1; i < count; i++)
        {
            if (sort_arr[i] > sort_arr[i - 1])
                rank++;
            rank_arr.push_back(rank);
        }
        for (int i = 0; i < count; i++)
        {
            for (int j = 0; j < count; j++)
            {
                if (arr[i] == sort_arr[j])
                {
                    result.push_back(rank_arr[j]);
                    break;
                }
            }
        }
        return result;
    }
};