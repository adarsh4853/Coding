#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &v,int l,int r,int k)
{
    int mid=l-((l-r)/2);
    if(l>r) return -1;
    if(v[mid]==k) return mid;
    else if(v[mid]>k) return binarySearch(v,l,mid-1,k); 
    else return binarySearch(v,mid+1,r,k);
}

int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int l=0,r=n-1;
    cout<<binarySearch(v,l,r,k);
    return 0;
}