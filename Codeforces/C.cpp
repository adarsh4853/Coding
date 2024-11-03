#include <bits/stdc++.h>
using namespace std;
int64_t inf = (int64_t)1e+18;
int mod = 1000000007;
#define int long long

// @author: siddhant139

void runCase(int &testcase)
{
    int n, k=0,m;
    cin >> n >> m ;
    vector<string> a(n);
    for (int i=0;i<n;i++) {
        cin >> a[i]; 
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j+1<m;j++){ 
    //         cout << a[i][j];
    //     }
    //     cout << "\n";
    // }

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){
            if(a[i][j]=='1') {
                if(i+1<n && j<m && a[i+1][j]=='5' ){
                    if(i+2<n && j<m && a[i+2][j]=='4'){
                        if(i+3<n && j<m && a[i+3][j]=='3') k++;
                        if(i+2<n && j-1<m && j-1>=0 && a[i+2][j-1]=='3') k++;
                    } 
                    if(i+1<n && j-1<m && a[i+1][j-1]=='4'){
                        if(i<n && j-1<m && a[i][j-1]=='3') k++;
                        if(i+1<n && j-2<m && a[i+1][j-2]=='3') k++;
                    }
                }

                if(i-1<n && j<m && a[i-1][j]=='5' ){
                    if(i-2<n && j<m && a[i-2][j]=='4'){
                        if(i-3<n && j<m && a[i-3][j]=='3') k++;
                        if(i-2<n && j+1<m && a[i-2][j+1]=='3') k++;
                    } 
                    if(i-1<n && j+1<m && a[i-1][j+1]=='4'){
                        if(i-1<n && j+2<m && a[i-1][j+2]=='3') k++;
                        if(i<n && j+1<m && a[i][j+1]=='3') k++;
                    }
                }

                if(i<n && j-1<m && a[i][j-1]=='5' ){
                    if(i<n && j-2<m && a[i][j-2]=='4'){
                        if(i<n && j-3<m && a[i][j-3]=='3') k++;
                        if(i-1<n && j-2<m && a[i-1][j-2]=='3') k++;
                    } 
                    if(i-1<n && j-1<m && a[i-1][j-1]=='4'){
                        if(i-2<n && j-1<m && a[i-2][j-1]=='3') k++;
                        if(i-1<n && j<m && a[i-1][j]=='3') k++;
                    }
                }

                if(i<n && j+1<m && a[i][j+1]=='5' ){
                    if(i<n && j+2<m && a[i][j+2]=='4'){
                        if(i<n && j+3<m && a[i][j+3]=='3') k++;
                        if(i+1<n && j+2<m && a[i+1][j+2]=='3') k++;
                    } 
                    if(i+1<n && j+1<m && a[i+1][j+1]=='4'){
                        if(i+2<n && j+1<m && a[i+2][j+1]=='3') k++;
                        if(i+1<n && j<m && a[i+1][j]=='3') k++;
                    }
                }
            }
        }

    }
    cout << k << "\n";
    
}

int32_t main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tests = 1;
    cin >> tests;
    for (int i = 1; i <= tests; i++)
        runCase(i);

    return 0;
}