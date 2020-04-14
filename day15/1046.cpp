class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        make_heap(stones.begin(),stones.end());
        
        if(stones.size()==1)
            return stones[0];
        
        while(stones.size()>1)
        {
            int first = stones.front();
            pop_heap(stones.begin(),stones.end());
            stones.pop_back();
            int second = stones.front();
            pop_heap(stones.begin(),stones.end());
            stones.pop_back();
            
            if(first!=second)
            {
                int temp = abs(first-second);
                stones.push_back(temp);
                push_heap(stones.begin(),stones.end());
            }
        }
        if(stones.size()==1)
            return stones[0];
        else
            return 0;
        
    }
};
