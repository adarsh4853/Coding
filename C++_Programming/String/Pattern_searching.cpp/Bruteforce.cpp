#include <bits/stdc++.h>
using namespace std;

//TC -> O((n-m+1)*m)
void searchPattern(string &s, string &p)
{
    int n = s.size(), m = p.size();
    int flag = 1;
    for (int i = 0; i < n - m + 1; ++i)
    {
        flag = 1;
        for (int j = 0; j < m; ++j)
        {
            if (s[i + j] != p[j])
            {
                flag = 0;
            }
        }
        if (flag == 1)
            cout << i << " ";
    }
}

// When pattern has all distinct characters
//TC -> O(n)
void searchPatterndistinct(string &s, string &p)
{
    int n = s.size(), m = p.size();
    for(int i=0;i<n-m+1;)
    {
        int j;
        for(j=0;j<m;j++) if(p[j]!=s[i+j]) break;
        if(j==m) cout<<i<<" ";
        if(j==0) i++;
        else i=i+j;
    }
}

int main()
{
    string s, p;
    cin >> s >> p;

    // searchPattern(s, p);
    searchPatterndistinct(s, p);
    return 0;
}