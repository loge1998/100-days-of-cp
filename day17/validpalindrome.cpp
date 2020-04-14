class Solution {
public:
    bool isPalindrome(string s) {
        
        if(s=="")
            return true;
        
        int low = 0;
        int high = s.length()-1;
        
        while(low<high)
        {
            while(low <s.length() && !isalnum(s[low]))
                low++;
            
            while(high>=0 &&!isalnum(s[high]))
                high--;
            
            if(low<high)
            {
                cout<<s[low]<<" "<<s[high]<<endl;
                if(tolower(s[low])!=tolower(s[high]))
                {   
                    return false;
                }
                low++;
                high--;
            }
            
        }
        
        return true;
        
    }
};
