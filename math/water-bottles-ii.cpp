class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int result = numBottles;
        while (numBottles - numExchange >= 0)
        {
            numBottles -= numExchange;
            result += 1;
            numExchange +=1;
            numBottles += 1;
        }
        return result;
    }
};