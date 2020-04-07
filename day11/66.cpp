class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
     
        int high = digits.size()-1;
        bool new_n = false;
        while(high>=0)
        {
            if(digits[high]==9)
            {
                digits[high]=0;
                high--;
                if(high<0)
                    new_n = true;
            }
            else
            {
                digits[high]++;
                break;
            }
        }
        if(new_n)
        {
            digits.insert(digits.begin(),1);

        }
        return digits;
    }
};
