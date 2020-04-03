class Solution {
public:
    
    int findsqr(int n)
    {
        int temp = 0;
        while(n>0)
        {
            int rem = n%10;
            temp+= pow(rem,2);
            n/=10;
        }
        return temp;
    }
    
    bool isHappy(int n) {
        int sqred = findsqr(n);
        int count = 0;
        while(sqred!=1)
        {
            count++;
            sqred = findsqr(sqred);
            if(count>100)
                return false;
        }
        return true;
    }
};
