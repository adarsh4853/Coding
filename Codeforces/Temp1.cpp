#include <bits/stdc++.h>
using namespace std;

string decimalToBinary(int n)
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

int main()
{
    
    return 0;
}