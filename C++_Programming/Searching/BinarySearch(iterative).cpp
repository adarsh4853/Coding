#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &v, int k)
{
    int l = 0, r = v.size() - 1, ans = -1, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (v[mid] <= k) // Satisfied condition
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << binarySearch(v, k);
    // int l=0,r=n-1;
    // int mid=l-((l-r)/2);
    // while(l<=r)
    // {
    //     mid=l-((l-r)/2);
    //     if(v[mid]==k) return mid;
    //     else if(v[mid]>k) r=mid-1;
    //     else l=mid+1;
    // }
    // return -1;
    return 0;
}