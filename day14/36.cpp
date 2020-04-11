class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        int row = board.size();
        int column = board[0].size();
        
        set<int> s;
        for(int i=0;i<row;i++)
        {
            s.clear();
            for(int j=0;j<column;j++)
            {
                if(board[i][j]=='.')
                    continue;
                if(s.count(board[i][j])>0)
                    return false;
                s.insert(board[i][j]);
            }
        }
        for(int i=0;i<column;i++)
        {
            s.clear();
            for(int j=0;j<row;j++)
            {
                if(board[j][i]=='.')
                    continue;
                if(s.count(board[j][i])>0)
                    return false;
                s.insert(board[j][i]);
            }
        }
        
        vector<pair<int,int>> initials;
        
        for(int val : {0,3,6})
        {
            for(int temp : {0,3,6})
                initials.push_back({val,temp});
        }
        
        for(auto row : initials)
        {
            int r = row.first;
            int c = row.second;
            s.clear();
            for(int i = r;i<r+3;i++)
            {
                for(int j=c;j<c+3;j++)
                {
                    if(board[i][j]=='.')
                        continue;
                    if(s.count(board[i][j])>0)
                        return false;
                    s.insert(board[i][j]);
                }
            }
        }
           
        return true;
    }
};


    

