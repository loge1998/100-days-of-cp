class Solution {
public:
    
    vector<pair<int,int>> neighbours(int m,int n,int i,int j)
    {
        vector<pair<int,int>> neighbours; 
        if(i>0)
            neighbours.push_back({i-1,j});
        if(i<m-1)
            neighbours.push_back({i+1,j});
        if(j>0)
            neighbours.push_back({i,j-1});
        if(j<n-1)
            neighbours.push_back({i,j+1});
            
        return neighbours;
    }
    
    
    void dfs(vector<vector<char>>& grid,vector<vector<bool>>& visited,int i,int j)
    {
        int m = grid.size();
        int n = grid[0].size();
        if(!visited[i][j] && grid[i][j]=='1')
        {
            visited[i][j]=true;
            for(auto temp : neighbours(m,n,i,j))
            {
                if(!visited[temp.first][temp.second] && grid[temp.first][temp.second]=='1')
                    dfs(grid,visited,temp.first,temp.second);
            }
        }
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
    
        int count = 0;
        int m = grid.size();
        if(m==0)
            return 0;
        int n = grid[0].size();
        vector<vector<bool>> visited(m,vector<bool>(n,false));
        for(int i =0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(!visited[i][j] && grid[i][j]=='1')
                {
                    dfs(grid,visited,i,j);
                    count++;
                }
            }
        }
        return count;
    }
};
