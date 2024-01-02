#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, temp;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        temp = n - 1;
        if (temp % 3 == 0)
        {
            cout << "First"<<endl;
            continue;
        }
        temp = n + 1;
        if (temp % 3 == 0)
            cout << "First"<<endl;
        else
            cout << "Second"<<endl;
    }
    return 0;
}