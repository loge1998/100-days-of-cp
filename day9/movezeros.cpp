class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int non_zero = 0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                if(non_zero<=i)
                {
                    non_zero = i+1;
                }
                while(non_zero<n)
                {
                    if(nums[non_zero]!=0)
                    {
                        swap(nums[i],nums[non_zero]);
                        break;
                    }
                    non_zero++;
                }
                if(non_zero>=n)
                    return;
            }
        }
        
        
    }
};
