#include <iostream>
#include <vector>
#define all(x) x.begin(),x.end()
#define ll long long
using namespace std;

bool myCompare(pair<int,int> a,pair<int,int> b)
{
    return a.first < b.first;
}

void run_case() {
    ll n, k;
    cin >> n >> k;

    vector<ll> b(n);
    ll prod = 1;
    // int mx = *max_element(all(v));
    // sort(all(v),myCompare);
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
        prod *= b[i];
    }

    if (2023 % prod == 0) {
        cout << "YES\n";
        cout<<2023/prod<<" ";
        for(int i=0;i<k-1;k++)
        {
            cout<< 1<<" ";
        }
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    while (tests-- > 0)
        run_case();

    return 0;
}
