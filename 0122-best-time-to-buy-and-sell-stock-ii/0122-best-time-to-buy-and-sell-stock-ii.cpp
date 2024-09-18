class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int cur_profit = 0;
        int buy = 0, sell = 1;
        while (sell < prices.size()) {
            if (prices[sell] - prices[buy] > 0) {
                int profit = prices[sell] - prices[buy];
                cout<<"profit: "<<profit<<endl;
                cur_profit = max(cur_profit,profit);
                cout<<"cur profit: "<<cur_profit<<endl;
                if(cur_profit>=profit){
                    max_profit+=cur_profit;
                    buy=sell;
                    cur_profit=0;
                }
            } else {
                buy=sell;
            }
            sell++;
        }

        return max_profit+cur_profit;
    }
};