class Solution {
public:
    int countElements(vector<int>& arr) {
        
        unordered_set count(arr.begin(),arr.end());
        
        int ans = 0;
        for(int temp : arr)
        {
            if(count.find(temp+1)!=count.end())
            {
                ans++;
            }
        }
        return ans;
    }
};
