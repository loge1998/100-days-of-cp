class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector<bool> ans(candies.size(),false);
        
        int maxVal = INT_MIN;
        for(int val : candies)
        {
            maxVal = max(val,maxVal);
        }
        
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies >= maxVal)
            {
                ans[i] = true;
            }
        }
        return ans;
    }
};
