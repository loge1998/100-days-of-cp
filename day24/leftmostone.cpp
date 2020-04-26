/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution { 
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) 
    {
    
        auto temp = binaryMatrix.dimensions();
        int n = temp[0],m = temp[1];
        
        int minVal = INT_MAX;
        for(int i=0;i<n;i++)
        {
            int curVal = INT_MAX;
            int low = 0;
            int high = m-1;
            while(low<=high)
            {
                int mid = low + (high-low)/2;
                if(binaryMatrix.get(i,mid)==1 )
                {
                    curVal = min(curVal,mid);
                    high = mid-1;
                }
                else
                {
                    low = mid+1;
                }
            }
            minVal = min(curVal,minVal);
        }
        if(minVal==INT_MAX)
            return -1;
        return minVal;
    }
};
