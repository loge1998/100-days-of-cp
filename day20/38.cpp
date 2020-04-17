class Solution {
public:
    string countAndSay(int n) {
        
        if(n==1)
            return "1";
        if(n==2)
            return "11";
            
        cout<<n<<endl;
        string prev = countAndSay(n-1);
        string cur ="";
        int count = 0;
        char ch = prev[0];
        cout<<prev<<endl;
        for(int i=0;i<prev.length();i++)
        {
            if(prev[i]==ch)
                count++;
            else
            {
                cur += to_string(count);
                cur += ch;
                ch = prev[i];
                count = 1;
            } 
        }
        if(prev[prev.length()-1]==ch)
        {
            cur+=to_string(count);
            cur+=ch;
        }

        return cur;

    }
};
