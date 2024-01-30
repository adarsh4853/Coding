#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(), x.end()
using namespace std;

string decToBinary(int n)
{
    string s = "";
    int i = 0;
    while (n > 0)
    {
        s = to_string(n % 2) + s;
        n = n / 2;
        i++;
    }
    return s;
}
int dtob(int n)
{
    int bin=0,i=0;
    while (n > 0)
    {
        int temp = n & 1;
        n=n>>1;
        bin+=temp*pow(10,i++);
    }
    return bin;
}

void run_case()
{
    int n;
    cin >> n;
    int bin = dtob(n);
    cout << bin << endl;
    return;
}

int main()
{
    int tests = 1;
    cin >> tests;

    while (tests-- > 0)
        run_case();
}