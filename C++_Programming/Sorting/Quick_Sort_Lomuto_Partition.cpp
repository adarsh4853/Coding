#include <bits/stdc++.h>
using namespace std;

//Lomuto
int partition(vector<int> &v, int l, int h)
{
    int pivot = v[h]; // Assuming last element as pivot
    int i = l - 1;
    for (int j = l; j <= h - 1; j++)
    {
        if (v[j] < pivot)
        {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i + 1], v[h]); // put the pivot in the intersection of windows
    return i + 1;//Return pivot location
}

void quickSort(vector<int> &v, int l, int h)
{
    if (l < h)
    {
        int p = partition(v, l, h);
        quickSort(v, l, p - 1);
        quickSort(v, p + 1, h);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    quickSort(v, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}