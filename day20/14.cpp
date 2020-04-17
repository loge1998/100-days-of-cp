class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.size()==0)
            return "";
        string ans = "";
        
        sort(strs.begin(),strs.end(),
             [](const string &a,const string &b)
             {
                 return (a.length() < b.length());
             }
            );
        
        for(int i=0;i<strs[0].length();i++)
        {
            bool terminate = false;
            for(int j=1;j<strs.size();j++)
            {
                if(strs[0][i]!=strs[j][i])
                {
                    terminate = true;
                    break;
                }
            }
            if(!terminate)
                ans+=strs[0][i];
            else
                break;
        }
        return ans;
    }
};
