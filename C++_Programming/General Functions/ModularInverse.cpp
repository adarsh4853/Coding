#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

int power(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b & 1) {
            res = res * a;
        }
        a = a * a;
        b >>= 1;
    }
    return res;
}

int inv(int a) {
    return power(a, mod - 2);
}

int main()
{
    
    return 0;
}