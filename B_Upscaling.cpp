#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std;

void run_case(int &tttt)
{
    // cout << "Case"
    //      << " : " << tttt << "\n";


    int n, flag = 1, neg = 1;
    cin >> n;
    string hash = "##";
    string dot = "..";
    if(n==1) cout<<hash<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (flag == 1)
                cout << hash;
            else
            {
                cout << dot;
            }
            flag = -flag;
        }
        if(n%2==0) flag=-flag;
        cout << endl;
    }
    // cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    for (int i = 0; i < tests; i++)
        run_case(i);
}