class Solution {
public:
    

    
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.empty() || nums2.empty()){
            return vector<int>();
        }
        unordered_map<int,int> temp;
        for(int t : nums1)
        {
         temp[t]++;   
        }
        vector<int> ans;
        for(int val : nums2)
        {
            if(temp.find(val)!=temp.end())
            {
                if(temp[val]>0)
                {   
                    ans.push_back(val);
                    temp[val]--;
                }
            }
        }
        
        return ans;
        
    }
};
