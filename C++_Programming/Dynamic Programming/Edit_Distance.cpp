#include <bits/stdc++.h>
using namespace std;

int editDistance(string str1, string str2)
{
    int m=str1.size(),n=str2.size();
    vector<vector<int>> dp(m+1,vector<int>(n+1));
    for(int i=0;i<=n;i++) dp[0][i]=0;
    for(int i=0;i<=m;i++) dp[i][0]=0;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(str1[i]==str2[j]) dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            else dp[i][j]=1+max(dp[i-1][j],dp[i][j-1]); 
        }
    }
    return dp[m][n];
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << editDistance(s1, s2);
    return 0;
}