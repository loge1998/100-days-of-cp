class Solution {
public:
    bool backspaceCompare(string S, string T) {
        
        string new1,new2;
        
        for(char ch :S)
        {
            if(ch!='#')
                new1+=ch;
            else
            {
                if(new1.length()>0)
                    new1.pop_back();
            }
        }
        
        for(char ch :T)
        {
            if(ch!='#')
                new2+=ch;
            else
            {
                if(new2.length()>0)
                    new2.pop_back();
            }
        }
        return (new1==new2);
 
    }
};
