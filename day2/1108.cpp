class Solution {
public:
    string defangIPaddr(string address) {
        
        string new_ip="";
        
        
        for(int i=0;i<address.length();i++)
        {
            if(address[i]!='.')
            {
                new_ip+=address[i];
            }
            else
            {
                new_ip+="[.]";
            }
        }
        return new_ip;
        
    }
};
