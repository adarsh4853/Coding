#include <bits/stdc++.h>
using namespace std;

int squareRoot(int l,int r,int n)
{
    // cout<<l<<" "<<r<<'\n';
    int mid=l-((l-r)/2);
    if(l>r) return mid-1;
    if(mid*mid == n) return mid;
    // else if(r-l == 1) return mid;
    else if(mid*mid > n) return squareRoot(l,mid-1,n);
    else return squareRoot(mid+1,r,n);
}

int main()
{
    int n;
    cin >> n;
    //convert to iterating approach
    cout<<squareRoot(1,n-1,n)<<'\n';
    return 0;
}