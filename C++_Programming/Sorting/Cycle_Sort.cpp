#include <bits/stdc++.h>

using namespace std;

void cycleSort(vector<int> &a, int n)
{
    int item, element, pos, i;

    /*Loop to traverse the array elements and place them on the correct position*/
    for (item = 0; item <= n - 2; item++)
    {
        element = a[item];

        /*position to place the element*/
        pos = item;

        for (i = item + 1; i < n; i++)
            if (a[i] < element)
                pos++;
        if (pos == item) /*if the element is at exact position*/
            continue;
        while (element == a[pos]) // For duplicate elements
            pos++;
        if (pos != item) /*put element at its exact position*/
            swap(element, a[pos]);

        /*Rotate rest of the elements*/
        while (pos != item)
        {
            pos = item;
            /*find position to put the element*/
            for (i = item + 1; i < n; i++)
                if (a[i] < element)
                    pos++;

            /*Ignore duplicate elements*/
            while (element == a[pos])
                pos++;

            /*put element to its correct position*/
            if (element != a[pos])
                swap(element, a[pos]);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cycleSort(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}