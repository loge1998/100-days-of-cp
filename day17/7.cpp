class Solution {
public:
    int reverse(int x) {
        
        string val = to_string(x);

        int low = (val[0]=='-')?1:0;
        int high = val.length()-1;
        
        while(low<high)
        {
            char temp = val[low];
            val[low]  = val[high];
            val[high] = temp;
            low++;
            high--;
        }
        cout<<val<<endl;
        try
        {
        return stoi(val);
        }catch(exception e)
        {
            return 0;
        }
    }
};
