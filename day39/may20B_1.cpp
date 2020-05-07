#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        bool people[n];
        memset(people,false,sizeof(people));
        int minVal = INT_MAX, maxVal = INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(people[i])
                continue;
            int left  = i-1;
            int right = i+1;
            int cnt = 1;
            while(left>=0 && (arr[left+1]-arr[left])<3)
            {
                people[left]=true;
                left--;
                cnt++;
            }
            while(right<n && (arr[right]-arr[right-1])<3)
            {
                people[right]=true;
                right++;
                cnt++;
            }
            minVal = min(cnt,minVal);
            maxVal = max(cnt,maxVal);
            people[i]=true;
        }

        cout<<minVal<<" "<<maxVal<<endl;
    }
}