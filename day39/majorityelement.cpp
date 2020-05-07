class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        for(int val : nums)
            mp[val]++;
        
        int max = 0;
        for(int val:nums)
        {
            if(mp[val]>(nums.size()/2))
                return val;
        }
        return -1;
    }
};
