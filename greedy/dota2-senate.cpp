class Solution {
public:
    string predictPartyVictory(string senate) {
        char R = 'R';
        int Ri = 0;
        char D = 'D';
        int Di = 0;
        bool firstR = false;
        string result = "isOk";
        for (int i = 0; i < senate.size(); i++)
        {
            if (i == 0)
            {
                if (senate[i] == R)
                    firstR = true;
            }
            if (senate[i] == R)
                Ri++;
            if (senate[i] == D)
                Di++;
        }
        if (Di > Ri || (!firstR && Di == Ri))
            result = "Dire";
        else if (Di < Ri || (firstR && Di == Ri))
            result = "Radiant";
        return result;
    }
};