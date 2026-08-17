class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int used= 0;
        while(numBottles>=numExchange) {
        used+= numExchange;
            numBottles -= numExchange;
            numBottles++;
        }
        return used + numBottles;
    }
};