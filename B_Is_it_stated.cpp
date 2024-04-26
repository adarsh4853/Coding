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

void run_case(int& tttt) 
{
    //cout<<"Case"<<" : "<<tttt<<"\n";

    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='i' && s[i+1]=='t')
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    for(int i=0;i<tests;i++)
        run_case(i);
}