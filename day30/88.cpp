class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int fir = 0;
        int sec = 0;
        if(n==0)
            return;
        for(int i=0;i<n;i++)
        {
            nums1[m+i] =nums2[i];
        }
        
        int i = m;
        while(i< m+n)
        {
            int j = i-1;
            int t = i;
            while(j>=0 && nums1[j]>nums1[t])
            {
                swap(nums1[t],nums1[j]);
                j--;
                t--;
            }
            i++;
        }
    }
};
