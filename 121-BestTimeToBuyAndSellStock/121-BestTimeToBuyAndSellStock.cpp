// Last updated: 7/16/2026, 4:38:48 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp = prices[0];
        int maxp = 0;

        for(int i = 1; i < prices.size(); i++){
            minp = min(minp, prices[i]);
            int p = prices[i] - minp;
            maxp = max(maxp, p);
        }
        return maxp;   
    }
};