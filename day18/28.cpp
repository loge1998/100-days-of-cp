class Solution {
public:
    int strStr(string haystack, string needle) {  
        
        if(needle=="")
            return 0;
        
        if(haystack.length() < needle.length())
            return -1;
        
        for(int i=0;i<=haystack.length()-needle.length();i++)
        {
            int j;
            cout<<i<<endl;
            for(j=0;j<needle.length();j++)
            {
                if(haystack[i+j]!=needle[j])
                {
                    break;
                }
            }
            if(j==needle.length())
                return i;
        }
        return -1;        
    }
};
