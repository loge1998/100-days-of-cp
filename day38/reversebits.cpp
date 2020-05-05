class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
    
        uint32_t ans = 0;
        for(int i=0;i<32;i++)
        {
            int temp = 1<<i;
            if((n&temp)>0)
            {
                ans+= (1<<(31-i));
            }
        }
        return ans;
        
    }
};
