class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        
        if(matrix.size()==0)
            return 0;
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> dp(n,vector<int>(m,0));
        int maxVal = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 || j==0)
                    dp[i][j] = (matrix[i][j]=='1')?1:0;
                else
                {
                    if(matrix[i][j]=='1')
                    {
                        if(dp[i-1][j-1]>0 && dp[i-1][j]>0 && dp[i][j-1]>0)
                        {
                            dp[i][j] = min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]));
                            dp[i][j]++;
                        }
                        else
                        {
                            dp[i][j]=1;
                        }
                    }
                }
                maxVal = max(maxVal,dp[i][j]);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cout<<dp[i][j]<<" ";
            cout<<endl;
        }
        
        return maxVal*maxVal;
        
    }
};
