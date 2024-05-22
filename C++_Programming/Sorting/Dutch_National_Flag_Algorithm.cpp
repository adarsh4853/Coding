#include <bits/stdc++.h>
using namespace std;

//Sort array with three types

//Sort array with 0's, 1's and 2's
void sort012(vector<int> &v,int n)
{
    int l=0,mid=0,r=n-1;
    while(mid<=r)//Equal because when both becomes equal then that element can be 0.
    {
        if(v[mid]==0) 
        {
            swap(v[mid],v[l]);
            l++;mid++;
        }
        else if(v[mid]==1) mid++;
        else
        {
            swap(v[mid],v[r]);
            r--;//Don't do mid++ because we don't know after swapping mid is on which number, it can be 0 also;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    sort012(v,n);
    for(int i=0;i<n;i++) cout<<v[i]<<" ";
    return 0;
}