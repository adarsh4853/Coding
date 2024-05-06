#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &v, int l, int r, int x)
{
    int mid = l - ((l - r) / 2);
    if (l > r)
        return -1;
    if (v[mid] == x)
    {
        if (mid != 0 && v[mid - 1] == v[mid])
        {
            return binarySearch(v, l - 1, r - 1, x);
        }
        else
            return mid;
    }
    else if (v[mid] > x)
        return binarySearch(v, l, mid - 1, x);
    else
        return binarySearch(v, mid + 1, r, x);
}

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int l = 0, r = n - 1;
    int mid = l - ((l - r) / 2);
    while (l <= r)
    {
        mid = l - ((l - r) / 2);
        if (v[mid] == x)
        {
            if (v[mid] == v[mid - 1])
            {
                r = mid - 1;
                continue;   
            }
            cout << mid << '\n';
            break;
        }
        else if (v[mid] > x)
            r = mid - 1;
        else
            l = mid + 1;
    }
    // cout << binarySearch(v, 0, n - 1, x) << '\n';
    return 0;
}