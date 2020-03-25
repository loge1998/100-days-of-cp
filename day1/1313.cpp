#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> decompressRLElist(vector<int> &nums) {
        
        vector<int> temp;
        for(int i=0;i<nums.size();i+=2)
        {
            int freq = nums[i];
            int val = nums[i+1];
            for(int j=0;j<freq;j++)
                temp.push_back(val);
        }
        return temp;
    }
};

int main()
{
    Solution sol;
    vector<int> input{1,2,3,4};
    vector<int> ans = sol.decompressRLElist(input);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<endl;
    return 0;
}