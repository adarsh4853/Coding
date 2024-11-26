#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    // cout<<"Enter subject number : ";
    // cin>>n;
    n=7;
    int sum=0;
    int ans=0;
    cout<<"Subject     Credit Grade\n";
    vector<string> v={"Mech ops","CPC","ICC","Fluid","Thermo","Lab","EAA"};
    int cr=4;
    for(int i=0;i<n;i++)
    {
        // int x;
        string c;
        cout<<v[i]<<" : ";
        // cin>>x>>c;
        cin>>c;
        int gr=0;
        if(c=="EX") gr=10;
        if(c=="A") gr=9;
        if(c=="B") gr=8;
        if(c=="C") gr=7;
        if(c=="D") gr=6;
        if(c=="P") gr=5;
        if(i==5) cr=2;
        if(i==6) cr=1;
        ans+=(gr*cr);
        sum+=cr;
    }
    cout<<sum<<'\n';
    cout<<fixed<<setprecision(4)<<(float)ans/sum<<'\n';
    return 0;
}