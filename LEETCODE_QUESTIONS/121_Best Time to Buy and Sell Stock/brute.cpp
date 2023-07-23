// brute force = TC=O(N2)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){
                int purchase_price=prices[i];
                
                // if this condition satisfy then only we can obtain profit , else we can go in loss
                if(prices[j]>purchase_price){
                    int selling_price=prices[j];
                    int profit=selling_price-purchase_price;
                    if(profit>max_profit) max_profit=profit;
                }
            }
        }
        return max_profit;
    }
};