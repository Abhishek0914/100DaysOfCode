class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        if (prices.empty()) return 0; 
        int min_price = prices[0]; 
        int max_profit = 0; 
        for (int i = 1; i < prices.size(); ++i) {
            min_price = std::min(min_price, prices[i]);           
            int potential_profit = prices[i] - min_price;
            max_profit = std::max(max_profit, potential_profit);
        }

        return max_profit; 
    }
};
