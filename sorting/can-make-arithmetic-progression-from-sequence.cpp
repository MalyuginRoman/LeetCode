class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int val = 0;
        bool result = false;
        int count = arr.size();
        if (count <= 1) return result;
        if (arr[1] - arr[0] == arr[count - 1] - arr[count - 2])
            result = true;
        return result;
    }
};