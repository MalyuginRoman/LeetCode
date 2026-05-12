class Solution {
public:
    bool isValid(string s) {
        vector<int> state;
        state.push_back(0);
        bool result = true;
for (char c : s)
{
if (c == '(') {
    state.push_back(1);
    result = false;}
else if (c == '[') {
    state.push_back(2);
    result = false;}
else if (c == '{') {
    state.push_back(3);
    result = false;}
else if (c == ')') {
    if (state.back() == 1)
        state.erase(state.end());
    else return false;}
else if (c == ']') {
    if (state.back() == 2)
        state.erase(state.end());
    else return false;}
else if (c == '}') {
    if (state.back() == 3)
        state.erase(state.end());
    else return false;}
}
        if (state.back() == 0)
            result = true;
    return result;
    }
};