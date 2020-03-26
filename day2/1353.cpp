class Solution {
public:
    
    static bool compare(vector<int> one ,vector<int> two)
    {
        return one[1] < two[1];
    }
    
    int maxEvents(vector<vector<int>>& events) {
        
        sort(events.begin(),events.end(),compare);
        
        set<int> days;
        
        int result = 0;
        for(int i=0;i<events.size();i++)
        {
            int e1 = events[i][0];
            int e2 = events[i][1];
            for(int j= e1;j<=e2;j++)
            {
                if(days.find(j)==days.end())
                {
                    days.insert(j);
                    result++;
                    break;
                }
            }

        }
        
        return result;
    }
};


