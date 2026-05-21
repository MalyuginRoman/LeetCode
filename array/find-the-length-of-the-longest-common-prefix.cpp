class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
    int result = 0;
    vector<string> strArr1;
    vector<string> strArr2;
    for (int num : arr1)
        if (count(strArr1.begin(), strArr1.end(), to_string(num)) < 1)
            strArr1.push_back(to_string(num));
    for (int num : arr2)
        if (count(strArr2.begin(), strArr2.end(), to_string(num)) < 1)
            strArr2.push_back(to_string(num));
    
        for (const string& xStr : strArr1)
        {
            for (const string& yStr : strArr2)
            {
                int value = 0;
                int count = min(xStr.length(), yStr.length());
                for (int i = 0; i < count; ++i)
                {
                    if (xStr[i] == yStr[i])
                        value++;
                    else
                        break; // Stop at the first mismatch
                }
                result = max(result, value);
            }
        }
    return result; 
    }
};