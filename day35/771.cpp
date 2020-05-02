class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        unordered_set<char> jewel;
        for(char ch :J)
            jewel.insert(ch);
        
        int count = 0;
        for(char ch : S)
        {
            if(jewel.count(ch)>0)
                count++;
        }
        return count;
    }
};
