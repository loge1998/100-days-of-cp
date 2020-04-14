class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        
        int shiftVal = 0;
        
        for(auto val:shift)
        {
            if(val[0]==0)
                shiftVal-=val[1];
            else
                shiftVal+=val[1];
        }
        cout<<shiftVal<<endl;
        if(shiftVal<0)
        {
            shiftVal = -shiftVal;
            shiftVal %= s.length();
            string newString = s.substr(shiftVal);
            newString += s.substr(0,shiftVal);
            return newString;
        }
        else if(shiftVal>0)
        {
            shiftVal %= s.length();
            string newString = s.substr(s.length()-shiftVal);
            newString += s.substr(0,s.length()-shiftVal);
                return newString;
        }
        
        return s;
    }
};
