class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int buyPrice = prices[0];
        int sellPrice = prices[0];

        int i=0;
        while (i < prices.size() - 1) { 
            // Move the index to the next local minimum
            while (i < prices.size()-1 && prices[i] >= prices[i+1])
                i++;
            buyPrice = prices[i];

            //Move the index to the next local maximum
            while (i < prices.size()-1 && prices[i] <= prices[i+1])
                i++;
            sellPrice = prices[i];

            maxProfit += sellPrice - buyPrice;
        }   

        return maxProfit;
    }
};
