class Solution {
public:
    bool rotateString(string A, string B) {
        
        if(A.length()!=B.length())
            return false;
        if(A==B)
            return true;
        
        B+=B;
        for(int i=0;i<B.length();i++)
        {
            if(B[i]==A[0])
            {
                bool flag = true;
                for(int j=0;j<A.length();j++)
                {
                    if(B[i+j]!=A[j])
                    {
                        flag = false;
                        break;
                    }
                }
                if(flag)
                    return true;
            }
        }
        return false;
        
    }
};
