#include <bits/stdc++.h>
using namespace std;

// lower_bound(num) -> Gives iterator to the Smallest element that is not smaller than num. Means element equal or greater than num.
// upper_bound(num) -> Gives iterator to the element that is strictly greater than num.

// lower_bound and upper_bound can only be applied on sorted data structures like sorted array,map,set etc.

// for getting element just smaller than given element, Use auto it=lower_bound(num); and then do it--;. But before doing it-- check if it!=arr.begin().

int main()
{
    // CSES -> Concert tickets
    int n,m;
    cin>>n>>m;
    vector<int> pr(n);
    for(int i=0;i<n;i++) cin>>pr[i];
    vector<int> mxpr(m);
    for(int i=0;i<n;i++) cin>>mxpr[i];
    multiset<int> ss;
    for(int i=0;i<n;i++) ss.insert(pr[i]);
    for(int i=0;i<m;i++)
    {
        if(ss.size()==0) 
        {
            cout<<-1<<'\n';
            continue;
        }
        auto it=ss.lower_bound(mxpr[i]);
        if(it!=ss.begin() && *it!=mxpr[i]) it--;
        else if(*it!=mxpr[i])
        {
            cout<<-1<<'\n';
            continue;
        }
        cout<<*it<<'\n';
        ss.erase(it);
    }
    return 0;
}

//Samples:- 
// 5 5
// 4 6 9 10 14
// 3 4 5 15 16