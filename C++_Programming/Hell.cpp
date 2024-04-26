#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, flag = 0, j;
    cin >> n;
    for (int i = 0;; i++)
    {
        ++n;
        flag = 1;
        for (j = 2; j < n; j++)
        {
            if (n % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    cout << j<< '\n';
    return 0;
}