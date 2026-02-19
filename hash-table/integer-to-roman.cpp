class Solution {
public:
    std::string intToRoman(int num) {
        std::vector<int> n;
        std::string result = "";
        while (num > 0)
        {
            int ni = num % 10;
            n.push_back(ni);
            num = num / 10;
        }
        int count = n.size() - 1;
        for (int i = count; i > -1; --i)
        {
            int val = n[i];
                switch(val)
            {
case 1:
if (i == 3 && count == 3) result += "M";
else if ((i == 2 && count == 3) || (i == 2 && count == 2)) result += "C";
else if ((i == 1 && count == 3) || (i == 1 && count == 2) || (i == 1 && count == 1)) result += "X";
else if ((i == 0 && count == 3) || (i == 0 && count == 2) || (i == 0 && count == 1) || (i == 0 && count == 0)) result += "I";
                    break;
case 2:
if (i == 3 && count == 3) result += "MM";
else if ((i == 2 && count == 3) || (i == 2 && count == 2)) result += "CC";
else if ((i == 1 && count == 3) || (i == 1 && count == 2) || (i == 1 && count == 1)) result += "XX";
else if ((i == 0 && count == 3) || (i == 0 && count == 2) || (i == 0 && count == 1) || (i == 0 && count == 0)) result += "II";
                    break;
case 3:
if (i == 3 && count == 3) result += "MMM";
else if ((i == 2 && count == 3) || (i == 2 && count == 2)) result += "CCC";
else if ((i == 1 && count == 3) || (i == 1 && count == 2) || (i == 1 && count == 1)) result += "XXX";
else if ((i == 0 && count == 3) || (i == 0 && count == 2) || (i == 0 && count == 1) || (i == 0 && count == 0)) result += "III";
                    break;
case 4:
if ((i == 2 && count == 3) || (i == 2 && count == 2)) result += "CD";
else if ((i == 1 && count == 3) || (i == 1 && count == 2) || (i == 1 && count == 1)) result += "XL";
else if ((i == 0 && count == 3) || (i == 0 && count == 2) || (i == 0 && count == 1) || (i == 0 && count == 0)) result += "IV";
                    break;
case 5:
if ((i == 2 && count == 3) || (i == 2 && count == 2)) result += "D";
else if ((i == 1 && count == 3) || (i == 1 && count == 2) || (i == 1 && count == 1)) result += "L";
else if ((i == 0 && count == 3) || (i == 0 && count == 2) || (i == 0 && count == 1) || (i == 0 && count == 0)) result += "V";
                    break;
case 6:
if ((i == 2 && count == 3) || (i == 2 && count == 2)) result += "DC";
else if ((i == 1 && count == 3) || (i == 1 && count == 2) || (i == 1 && count == 1)) result += "LX";
else if ((i == 0 && count == 3) || (i == 0 && count == 2) || (i == 0 && count == 1) || (i == 0 && count == 0)) result += "VI";
                    break;
case 7:
if ((i == 2 && count == 3) || (i == 2 && count == 2)) result += "DCC";
else if ((i == 1 && count == 3) || (i == 1 && count == 2) || (i == 1 && count == 1)) result += "LXX";
else if ((i == 0 && count == 3) || (i == 0 && count == 2) || (i == 0 && count == 1) || (i == 0 && count == 0)) result += "VII";
                    break;
case 8:
if ((i == 2 && count == 3) || (i == 2 && count == 2)) result += "DCCC";
else if ((i == 1 && count == 3) || (i == 1 && count == 2) || (i == 1 && count == 1)) result += "LXXX";
else if ((i == 0 && count == 3) || (i == 0 && count == 2) || (i == 0 && count == 1) || (i == 0 && count == 0)) result += "VIII";
                    break;
case 9:
if ((i == 2 && count == 3) || (i == 2 && count == 2)) result += "CM";
else if ((i == 1 && count == 3) || (i == 1 && count == 2) || (i == 1 && count == 1)) result += "XC";
else if ((i == 0 && count == 3) || (i == 0 && count == 2) || (i == 0 && count == 1) || (i == 0 && count == 0)) result += "IX";
                    break;
case 0:
if ((i == 2 && count == 3) || (i == 2 && count == 2)) result += "";
else if ((i == 1 && count == 3) || (i == 1 && count == 2) || (i == 1 && count == 1)) result += "";
else if ((i == 0 && count == 3) || (i == 0 && count == 2) || (i == 0 && count == 1) || (i == 0 && count == 0)) result += "";
                    break;
default:
result += "";
                    break;
            }
        }
        return result;
    }
};