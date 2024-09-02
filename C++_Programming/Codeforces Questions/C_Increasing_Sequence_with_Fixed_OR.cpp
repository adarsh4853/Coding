#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
const int inf = (int)1e18;
const int mod = 1e9 + 7;

string decimalToBinary(int n)
{
    string s = "";
    int i = 0;
    while (n > 0)
    {
        s = to_string(n % 2) + s;
        n = n / 2;
        i++;
    }
    return s;
}

int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;
    int base = 1;
    int len = num.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
    return dec_value;
}

void runCase()
{
    int n;
    cin >> n;
    if(n==1)
    {
        cout<<n<<'\n'<<1<<'\n';
        return;
    }
    string s = decimalToBinary(n);
    vector<int> ans;
    for(int i=0;i<s.size();i++)
    {
        string temp=s;
        if(temp[i]=='1') 
        {
            temp[i]='0';
            int a=binaryToDecimal(temp);
            if(a!=0) ans.push_back(a);
        }
    }
    ans.push_back(n);
    cout<<ans.size()<<'\n';
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<' ';
    }
    cout<<'\n';
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests = 1;
    cin >> tests;

    for (int i = 1; i <= tests; i++)
    {
        // cout << "#Case " << i << ": \n";
        runCase();
    }

    return 0;
}