class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int sum=numBottles;
        if(sum<numExchange)
        {
            return sum;
        }
        while(numBottles >= numExchange)
        {
            numBottles=numBottles-numExchange;
            numBottles++;
            sum++;
            numExchange++;
        }
        return sum;
    }
};