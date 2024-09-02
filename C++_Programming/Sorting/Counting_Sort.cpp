#include <bits/stdc++.h>
using namespace std;

// Modified Counting Sort
// Stable and used to sort objects

void CountingSort(vector<int> &v, int n, int k)
{
    vector<int> count(k, 0); // Initialize all elements count with zero
    // Store the count of elements
    for (int i = 0; i < n; i++)
        count[v[i]]++;

    // Store how many elements are less than or equal to ith element
    for (int i = 1; i < k; i++)
        count[i] = count[i - 1] + count[i]; // Prefix sum

    vector<int> output(n);

    // put the elements from original array to the correct place
    for (int i = n - 1; i >= 0; i--) // Reverse loop for STABILITY
    {
        output[count[v[i]] - 1] = v[i];
        count[v[i]]--;
    }

    // Copy the output array in original array
    for (int i = 0; i < n; i++)
        v[i] = output[i];
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n); // Elements ranges from 0 to k-1
    for (int i = 0; i < n; i++)
        cin >> v[i];

    CountingSort(v, n, k);
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}