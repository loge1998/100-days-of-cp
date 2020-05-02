class Solution {
public:
    int maxDiff(int num) {
    
        string a = to_string(num);
        string min = a,max = a;
        
        
        char ch;
        for(int i=0;i<max.length();i++)
        {
            if(max[i]!='9')
            {
                ch = max[i];
                cout<<ch<<endl;
                for(int j=i;j<max.length();j++)
                {
                    if(max[j]==ch)
                        max[j]='9';
                }
                break;
            }
        }
        if(min[0]!='1')
        {
            ch = min[0];
            for(int i=0;i<min.length();i++)
            {
                for(int j=i;j<min.length();j++)
                {
                    if(min[j]==ch)
                        min[j]='1';
                }
            }
        }
        else
        {
            for(int i=1;i<min.length();i++)
            {
                if(min[i]!='0' && min[i]!='1')
                {
                    ch = min[i];
                    for(int j=i;j<min.length();j++)
                    {
                        if(min[j]==ch)
                            min[j]='0';
                    }
                    break;
                }
            }
        }
                
        cout<<max<<" "<<min<<endl;

        int a1 = stoi(max);
        int b1 = stoi(min);
        b1 = (b1<num)?b1:num;
        return(a1-b1);
    
    }
};
