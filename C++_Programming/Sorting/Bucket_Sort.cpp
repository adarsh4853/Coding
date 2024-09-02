#include <bits/stdc++.h>
using namespace std;

void bucketsort(vector<int> &v, int n, int k)
{
    int mx = v[0];
    for (int i = 1; i < n; i++) mx = max(mx, v[i]); // Calculating maximum value for putting elements in the bucket
    mx++;                   // Due to zero indexing
    vector<int> bkt[k];     // Vector of buckets

    // Put element in the bucket in their suitable range
    for (int i = 0; i < n; i++)
    {
        int bi = (k * v[i]) / mx;
        bkt[bi].push_back(v[i]);
    }
    // Sort individual buckets
    for (int i = 0; i < k; i++)
        sort(bkt[i].begin(), bkt[i].end());

    // Put buckets in original array
    int index = 0;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < bkt[i].size(); j++)
        {
            v[index++] = bkt[i][j];
        }
    }
}

int main()
{
    int n, k;
    cin >> n >> k; // k = number of Buckets
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    bucketsort(v, n, k);
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}