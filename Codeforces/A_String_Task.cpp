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
using namespace std;

void run_case() {
    string s;
    cin >> s;
    char dot = '.';
    int size = s.length();

    for (int i = 0; i < size; ) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y') {
            s.erase(i, 1);
            size--;
        } else {
            if ((s[i] >= 'A' && s[i] <= 'Z')) {
                s[i] = s[i] + ('a' - 'A');
            }
            s.insert(i, 1, dot);
            i += 2;
            size++; 
        }
    }
    cout << s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    while (tests-- > 0)
        run_case();
}
