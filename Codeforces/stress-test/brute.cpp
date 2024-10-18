/**
 *    author:  tourist
 *    created: 29.09.2024 08:39:36
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--) {
    int64_t b, c, d;
    cin >> b >> c >> d;
    int64_t a = 0;
    bool fail = false;
    for (int bit = 0; bit < 60; bit++) {
      int bb = (b >> bit) & 1;
      int cc = (c >> bit) & 1;
      int dd = (d >> bit) & 1;
      vector<int> cand;
      for (int aa = 0; aa < 2; aa++) {
        if ((aa | bb) - (aa & cc) == dd) {
          cand.push_back(aa);
        }
      }
      if (cand.empty()) {
        fail = true;
        break;
      }
      a |= int64_t(cand[0]) << bit;
    }
    cout << (fail ? -1 : a) << '\n';
  }
  return 0;
}
