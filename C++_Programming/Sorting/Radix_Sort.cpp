#include <bits/stdc++.h>
using namespace std;

void countingSort(vector<int> &v, int n, int exp)
{
    vector<int> count(10), output(n);
    for (int i = 0; i < n; i++)
        count[(v[i] / exp) % 10]++;

    for (int i = 1; i < 10; i++)
        count[i] = count[i - 1] + count[i];

    for (int i = n - 1; i >= 0; i--)
    {
        output[count[(v[i] / exp) % 10] - 1] = v[i];
        count[(v[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; i++)
        v[i] = output[i];
}

void radixSort(vector<int> &v, int n)
{
    int mx = v[0];
    for (int i = 1; i < n; i++)
        mx = max(mx, v[i]);
    for (int exp = 1; mx / exp > 0; exp *= 10)
        countingSort(v, n, exp);
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    radixSort(v, n);
    for (int i = 0; i < n; i++)
        cout << v[i]<<" ";
    return 0;
}