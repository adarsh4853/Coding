#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s1;
        cin >> s1;
        int x = s1.length();
        for (int j = 0; j < x; j++)
        {
            if (s1[j] == 'b')
            {
                s1.erase(j, 1);
                x--;
                j--;
                //cout << s1 << endl;
                for (int k = j; k >= 0; k--)
                {
                    if ((s1[k] >= 'a') && (s1[k] <= 'z'))
                    {
                        s1.erase(k, 1);
                        x--;
                        j--;
                        //cout << s1 << endl;
                        break;
                    }
                }
            }
            if (s1[j] == 'B')
            {
                s1.erase(j, 1);
                x--;
                j--;
                //cout << s1 << endl;
                for (int k = j; k >= 0; k--)
                {
                    if ((s1[k] >= 'A') && (s1[k] <= 'Z'))
                    {
                        s1.erase(k, 1);
                        x--;
                        j--;
                        //cout << s1 << endl;
                        break;
                    }
                }
            }
        }
        cout << s1 << endl;
    }
    return 0;
}