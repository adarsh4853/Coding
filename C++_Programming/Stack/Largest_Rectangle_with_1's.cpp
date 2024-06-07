#include <bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int> &heights)
{
    int n = heights.size(), curr = 0, ans = 0;
    vector<int> prs(n), ns(n);
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        while (st.empty() == false && heights[st.top()] >= heights[i])
            st.pop();
        if (st.empty() == false)
            prs[i] = st.top();
        else
            prs[i] = -1;
        st.push(i);
    }
    while (!st.empty())
        st.pop();
    for (int i = n - 1; i >= 0; i--)
    {
        while (st.empty() == false && heights[st.top()] >= heights[i])
            st.pop();
        if (st.empty() == false)
            ns[i] = st.top();
        else
            ns[i] = n;
        st.push(i);
    }
    for (int i = 0; i < n; i++)
    {
        curr = heights[i] + (i - prs[i] - 1) * heights[i] + (ns[i] - i - 1) * heights[i];
        ans = max(ans, curr);
    }
    return ans;
}

int largestRectangleWith1(vector<vector<int>> v,int r,int c)
{
    vector<int> hist(c);
    int ans=0,curr=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(v[i][j]==0) hist[j]=0;
            else hist[j]+=v[i][j];
        }
        curr=largestRectangleArea(hist);
        ans=max(ans,curr);
    }
    return ans;
}

int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<int>> v(r, vector<int>(c));

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>v[i][j];
        }
    }
    cout<<largestRectangleWith1(v, r, c)<<'\n';
    return 0;
}