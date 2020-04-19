class Solution {
public:
    
    int search(vector<int>& arr,int low,int high,int target)
    {
        if(low>high)
            return -1;
        int mid = low + (high-low)/2;
        if(arr[mid]==target)
            return mid;
        if(arr[low]<=arr[mid])
        {
            if(arr[low] <= target && target <= arr[mid])
                return search(arr,low,mid-1,target);
            
            return search(arr,mid+1,high,target);
        }
        
        if(arr[mid] <= target && target <= arr[high])
            return search(arr,mid+1,high,target);
        
        return search(arr,low,mid-1,target);   
    }
    
    int search(vector<int>& nums, int target) 
    {
        int low = 0;
        int high = nums.size()-1;
        int pos = -1;
        pos = search(nums,low,high,target);   
        return pos;
    }
};



