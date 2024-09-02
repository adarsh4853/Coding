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

    int n,a,b;
    cin>>n>>a>>b;
    if(b > 2*a) cout<<n*a<<endl;
    else if(n%2==0) cout<<(n*b)/2<<endl;
    else if(n%2!=0) cout<<((n-1)*b)/2+a<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    for(int i=0;i<tests;i++)
        run_case(i);
}