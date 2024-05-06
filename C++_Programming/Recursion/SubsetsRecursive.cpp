#include <bits/stdc++.h>
using namespace std;

void subsets(string &s, string curr = " ", int i = 0)
{
   if (i == s.size())
   {
      cout << curr << " ";
      return;
   }
   subsets(s, curr, i + 1);
   subsets(s, curr + s[i], i + 1);
}

int main()
{
   string s;
   cin >> s;
   int n = s.size();
   subsets(s);
   return 0;
}