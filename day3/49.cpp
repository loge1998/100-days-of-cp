class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {        
        vector<string> ana(strs.size());
        
        for(int i=0;i<strs.size();i++)
        {
            ana[i] = strs[i]; 
            sort(strs[i].begin(),strs[i].end());
        }
        
        vector<vector<string> > ans;
        vector<bool> vis(strs.size(),false);
        int cur = 0;
        for(int i=0;i<strs.size();i++)
        {
            if(!vis[i])
            {
                vis[i]=true;
                ans.push_back(vector<string>{});
                ans[cur].push_back(ana[i]);
                for(int j=i+1;j<strs.size();j++)
                {
                    if(!vis[j])    
                    {
                        if(strs[i]==strs[j])
                        {
                            vis[j]=true;
                            ans[cur].push_back(ana[j]);
                        }
                    }
                }
                cur++;
            }
        }
        return ans;
    }
};
