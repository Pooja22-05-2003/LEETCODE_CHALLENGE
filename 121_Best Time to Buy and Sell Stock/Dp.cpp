// Time Complexity = O(N);
// Space Complexity =O(1)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;   // lets say if there is no such array then we can buy and sell the stock at the same day 
        int minCost=prices[0];

        for(int i=1;i<prices.size();i++){
            int cost=prices[i]-minCost;
            maxProfit=max(cost,maxProfit);
            minCost=min(prices[i],minCost); // this is Dp because we are remembering the past

        }
        return maxProfit;

    }
};