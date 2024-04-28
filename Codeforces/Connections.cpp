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
#define ll long long
#define endl '\n'
#define all(x) x.begin(), x.end()
using namespace std;
 
void run_case() 
{
    int x,y,id,cnt=0,temp=0;
    cin>>x>>y;
    vector<int> a,b;
    for(int i=0;i<x;i++) {
        cin>>id;
        a.push_back(id);
    }
    for(int i=0;i<y;i++) {
        cin>>id;
        b.push_back(id);
    }
    int i=0,j=0;
    id=min(x,y);
    while(i!=id){
        if(a[i]==b[j]) 
        {
            cnt++,i++;
        }
        else j++;
        cout<<"1"<<endl;
    }
    cout<<cnt<<endl;

}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tests = 1;
    cin >> tests;
 
    while (tests-- > 0)
    run_case();
}