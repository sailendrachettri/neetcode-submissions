class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int best_buy = prices[0];

        for(int i = 1; i < prices.size(); i++){
            int prof = prices[i] - best_buy;

            if(prof > 0) max_profit += prof;

            best_buy = prices[i];
        }

        return max_profit;
    }
};