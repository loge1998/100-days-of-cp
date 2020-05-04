class Solution {
public:
    
    long long int nextbigpowerof2(int n)
    {
        return pow(2,ceil(log2(n)));
    }
    
    bool powerof2(int n)
    {
        return ((n&n-1)==0);
    }
    
    int findComplement(int num) {
        if(num==1 || num==INT_MAX)
            return 0;
        if(num==0)
            return 1;
        if(powerof2(num))
        {
            return num-1;
        }
        else
        {
            long long int val = nextbigpowerof2(num);
            cout<<val<<endl;
            return num^(val-1);
        }
    }
};
