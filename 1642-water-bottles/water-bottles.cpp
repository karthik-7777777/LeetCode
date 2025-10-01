class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum=numBottles;
        if(sum < numExchange)
        {
            return sum;
        }
        while(numBottles>=numExchange)
        {
            sum=sum+(numBottles/numExchange);
            int x=numBottles%numExchange;
            numBottles=numBottles/numExchange;
            numBottles+=x;
        }
        return sum;
    }
};