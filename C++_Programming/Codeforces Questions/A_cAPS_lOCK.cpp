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
#define ll long long
using namespace std;

int main() {

    string s;
    cin>>s;
    bool flag = all_of(s.begin()+1,s.end(),[](char a){return isupper(a);});
    if(flag==1) for(char &e : s) e ^= (1<<5);
    cout<<s;
    return 0;
}