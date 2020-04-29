class Solution {
public:
    int rob(vector<int>& nums) {
        
        if(nums.size()==0) return 0;
        
        vector<int> dp(nums.size(),0);
        dp[0] =nums[0];
        for(int i=1;i<nums.size();i++)
        {
            dp[i] = max(((i>1)?dp[i-2]:0)+nums[i],dp[i-1]);
        }
        
        return dp[nums.size()-1];
    }
};
