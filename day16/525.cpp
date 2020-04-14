class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        int longArr = 0;
        int sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            sum += (nums[i]==0)?-1:1;
            
            if(sum==0)
                longArr = i+1;
            
            cout<<sum<<endl;
            if(mp.find(sum)!=mp.end())
            {
                int lval = mp[sum];
                int range = i-lval;
                longArr = max(range,longArr);
            }
            else
            {
                mp[sum]=i;
            }
        }
        return longArr;
    }
};


   
