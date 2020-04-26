class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        if(m==0)
            return 0;
        
        if(m==n)
            return m;
        
        if(n-m >m)
            return 0;
        
        long long int ans = INT_MAX,i;
        for(i=m;i<=n;i++)
        {
            ans &=i;
        }
        return ans;
    }
};

    

        
