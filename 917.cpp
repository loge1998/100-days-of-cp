class Solution {
public:
    string reverseOnlyLetters(string S) {
        
        int low = 0;
        int high = S.length()-1;
        
        while(low<high)
        {
            
            if(!isalpha(S[low]))
            {
                low++;
                continue;
            }
            if(!isalpha(S[high]))
            {
                high--;
                continue;
            }   
            cout<<S[low]<<" "<<S[high]<<endl;
            char temp = S[low];
            S[low] = S[high];
            S[high] = temp;
            low++;
            high--;
        }
        return S;
    }
};
