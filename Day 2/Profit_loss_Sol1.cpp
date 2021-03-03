class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_prof=0;
        int min_price = prices[0];
        int n = prices.size();
        
        for(int i=1; i<n; i++)
        {
            if(min_price > prices[i])
                min_price = prices[i];
            else if(max_prof < (prices[i] - min_price))
                    max_prof = prices[i] - min_price;
        }
        
        return max_prof;
    }
};