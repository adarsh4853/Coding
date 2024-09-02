#include <bits/stdc++.h>
using namespace std;

void printPermutations(string s, int i=0)
{
   if (i == s.size()-1)
   {
      cout << s <<" ";
      return;
   }
   for (int j = i; j < s.size(); j++)
   {
      swap(s[j],s[i]);
      printPermutations(s,i+1);
      swap(s[j],s[i]);
   }
}

int main()
{
   string s;
   cin >> s;
   int n = s.size();
   printPermutations(s);
   return 0;
}