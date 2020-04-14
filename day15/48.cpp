class Solution {
public:
    
    void transpose(vector<vector<int>>& matrix)
    {
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=i;j<matrix[0].size();j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
    
    void swapRowElem(vector<vector<int>>& matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        
        for(int i=0;i<row;i++)
        {
            for(int j=0,k=col-1;j<k;j++,k--)
            {
                swap(matrix[i][j],matrix[i][k]);
            }
        }
    }
    
    
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        swapRowElem(matrix);
    }
};


