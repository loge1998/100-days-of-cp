class Solution {
public:
    
    bool canJump(vector<int>& nums) {
        
        int maxIndex = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(i<=maxIndex)
            {
                maxIndex = max(maxIndex,i+nums[i]);
                if(maxIndex>=nums.size()-1)
                    return true;
            }
            else
                return false;
        }
        
        return false;
        
    }
};
