#include <bits/stdc++.h>
using namespace std;

//Lomuto
int partition(vector<int> &v, int l, int h)
{
    int pivot = v[h];
    int i = l - 1;
    for (int j = l; j < h; j++)
    {
        if (v[j] < pivot)
        {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i + 1], v[h]);
    return i + 1;
}

int kthSmallest(vector<int> &v, int n, int k)
{
    // Sorting
    //  sort(v.begin(),v.end());
    //  return k-1;

    // Lomuto
    int l = 0, r = n - 1;
    while(l<=r)
    {
    int p = partition(v, l, r);
    if (p == k - 1)
        return p;
    else if (p > k - 1)
        r = p - 1;
    else
        l = p + 1;
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    cout << v[kthSmallest(v, n, k)] << '\n';
    return 0;
}