class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int count = 1;
        int occur_once = nums[0];
        for(int i = 1;i<nums.size();i++)
        {
            occur_once ^=nums[i];
        }
        return occur_once;
    }
};
