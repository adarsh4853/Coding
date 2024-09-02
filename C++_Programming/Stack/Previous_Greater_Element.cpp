#include <bits/stdc++.h>
using namespace std;

//TC -> O(n)
//AS -> O(n)

void prevGreater(vector<int> v,int n)
{
    stack<int> st;
    for(int i=0;i<n;i++)
    {
        while(st.empty()==false && st.top()<=v[i])
        {
            st.pop();
        }
        if(st.empty()) cout<<-1<<" ";
        else cout<<st.top()<<" ";
        st.push(v[i]);
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    prevGreater(v,n);

    return 0;
}