#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &v, int n)
{
    for (int i = 0; i < n - 1; i++) // n-1 elements are sorted means nth element will be automatically sorted
    {
        for (int j = 0; j < n - i - 1; j++) // j<n-i-1 because n-i-1 elements from the last will already be sorted
        {
            if (v[j] > v[j + 1])
                swap(v[j], v[j + 1]); // for decreasing just change the sign to '<'
        }
    }

    // Optimised
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    bubbleSort(v, n);

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}