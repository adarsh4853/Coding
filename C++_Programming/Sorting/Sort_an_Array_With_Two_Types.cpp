#include <bits/stdc++.h>
using namespace std;

//All Codes are based on Hoare's partition
//All are unstable
//If want stable sorting then use naive partition

void sortNegPos(vector<int> &v, int n)
{
    int i = 0, j = n - 1;
    while (true)
    {
        while (v[i] < 0) i++;
        while (v[j] >= 0) j--;
        if (i >= j) return;
        swap(v[i], v[j]);
    }
}

void sortEvenOdd(vector<int> &v, int n)
{
    int i = 0, j = n - 1;
    while (true)
    {
        while (v[i] % 2 == 0) i++;
        while (v[j] % 2 != 0) j--;
        if (i >= j) return;
        swap(v[i], v[j]);
    }
}

void sortBinaryArray(vector<int> &v, int n)
{
    int i = 0, j = n - 1;
    while (true)
    {
        while (v[i] == 0) i++;
        while (v[j] == 1) j--;
        if (i >= j) return;
        swap(v[i], v[j]);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    // sortNegPos(v, n);
    // sortEvenOdd(v, n);
    sortBinaryArray(v, n);
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}