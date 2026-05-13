class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> num;
        vector<int> size;
        bool result = true;
        for (int i = 0; i < arr.size(); i++)
        {
            int value_to_find = arr[i];
            int place;
            auto it = find(num.begin(), num.end(), value_to_find);
            if (it != num.end())
            {
                place = distance(num.begin(), it);
                size[place] += 1;
            }
            else
            {
                place = distance(num.begin(), num.end());
                num.push_back(arr[i]);
                size.push_back(1);
            }
        }
        for (int i = 0; i < size.size(); i++)
            if (count(size.begin(), size.end(), size[i]) != 1)
            {
                result = false;
                break;
            }
        return result;
    }
};