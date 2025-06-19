class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minbuy = prices[0];
        int profit = 0;

        for(int i = 1; i < prices.size(); i++){
            profit = max(prices[i] - minbuy , profit);
            minbuy = min(minbuy , prices[i]);
        }

        return profit;
    }
};
