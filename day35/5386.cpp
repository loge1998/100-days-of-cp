class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {

        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        
        int n = s1.length();
        bool crt1 = true,crt2=true;
        for(int i=0;i<n;i++)
        {
            if(s1[i]>s2[i])
            {
                crt1 = false;
            }
            if(s2[i]>s1[i])
            {
                crt2 = false;
            }  
        }
            return crt1||crt2;
    }
};
