// 1895A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, y, k, temp;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y >> k;
        if (y < x)
            cout << x << endl;
        else
        {
            if ((y - x) <= k)
                cout << y << endl;
            else
            {
                temp = x + k;
                temp += (y - temp) * 2;
                cout << temp << endl;
            }
        }
    }
    return 0;
}