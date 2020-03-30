class Solution {
public:
    int movesToMakeZigzag(vector<int>& nums) {
        
        int even_ans = 0 ,odd_ans = 0;
        
        for(int i= 0 ;i<nums.size();i+=2)
        {
            int temp = 0;
            if(i-1>=0 && nums[i]>=nums[i-1])
            {
                    temp = nums[i]-nums[i-1]+1;
            }
            if(i+1<nums.size() && nums[i]>=nums[i+1])
            {
                    temp = max(temp,nums[i]-nums[i+1]+1);
            }
            even_ans+=temp;
        }
        for(int i= 1 ;i<nums.size();i+=2)
        {
            int temp = 0;
            if(i-1>=0 && nums[i]>=nums[i-1])
            {
                    temp = nums[i]-nums[i-1]+1;
            }
            if(i+1<nums.size() && nums[i]>=nums[i+1])
            {
                    temp = max(temp,nums[i]-nums[i+1]+1);
            }
            odd_ans += temp;
        }
        return min(even_ans,odd_ans);
    }
};

            
            
        
