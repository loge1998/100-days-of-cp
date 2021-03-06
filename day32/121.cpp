class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        if(prices.size()<2)
            return 0;
        
        int lowestSoFar = prices[0];
        int ans = 0;
        for(int i=1;i<prices.size();i++)
        {
            ans = max(prices[i]-lowestSoFar,ans);
            lowestSoFar = min(prices[i],lowestSoFar);
        }
        
        return ans;
        
    }
};
