#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &v,int n,int k)
{
    int l=0,r=n-1;
    int mid=l-((l-r)/2);
    while(l<=r)
    {
        mid=l-((l-r)/2);
        if(v[mid]==k) return mid;
        else if(v[mid]>k) r=mid-1;
        else l=mid+1;
    }
    return -1;
}

int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<binarySearch(v,n,k);
    return 0;
}