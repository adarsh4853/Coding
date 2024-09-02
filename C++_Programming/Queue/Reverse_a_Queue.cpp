#include <bits/stdc++.h>
using namespace std;

//Iterative
void reverseQueue(queue<int> &q)
{
    stack<int> st;
    while(!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
}

//Recursive
void reverseQueueRec(queue<int> &q)
{
    if(q.empty()) return;
    int x=q.front();
    q.pop();
    reverseQueueRec(q);
    q.push(x);
}

int main()
{
    queue<int> q;
    q.push(43);
    q.push(72);
    q.push(31);
    q.push(67);
    q.push(71);
    
    // reverseQueue(q);
    // while(!q.empty())
    // {
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }
    // cout<<'\n';
    reverseQueueRec(q);
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}