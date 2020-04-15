class Solution {
public:
    int myAtoi(string str) {
        string ans="";
        bool neg=false;
        int i=0;
        
        while(str[i]==' '){
            i++;
        }
    
        if(str[i]=='-')
        {
             neg=true;
            i++;
        }
        else if(str[i]=='+')
       {
            neg=false;
           i++;
       }

        for(int j=i;j<str.length();j++){
            if((str[j]<'0'||str[j]>'9')){
                break;
            }
            else{
                ans+=str[j];
            }

        }

        long long ret=0;
        int j=0;
        while(j<ans.length()){
            ret=ret*10+(ans[j]-'0');
            if(neg){
                if(ret>INT_MAX+(long long)1)
                    return INT_MIN;
            }
            else
            {
                if(ret>INT_MAX)
                    return INT_MAX;
            }
            j++;
        }
        if(neg)
            return ret*-1;
        return ret;
    
    }
};
