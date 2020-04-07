class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size()==0)
            return 0;
        int cur = 0;
        int found = INT_MIN ; 
        for(int i=0;i<nums.size();i++)
        {
            if(found!= nums[i])
            {
                found = nums[i];
                nums[cur] = nums[i];
                cur++;
            }
        }
        
        return cur;
    }
};


