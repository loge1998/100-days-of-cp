class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]] = i;
        }
        for(int i =0;i<nums.size();i++)
        {
            int temp = target - nums[i];
            if(m.find(temp)!=m.end())
            {
                if(i!=m[temp])
                    return {i,m[temp]};
            }
        }

        return{};
    }
};
