#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    int s[5];
    s[0] = a + b * c;
    s[1] = a * (b + c);
    s[2] = a * b * c;
    s[3] = (a + b) * c;
    s[4] = a + b + c;
    int max = s[0];
    for (int i = 1; i < 5; i++)
    {
        if (s[i] > max)
            max = s[i];
    }
    cout << max << endl;
    return 0;
}