#include <bits/stdc++.h>
using namespace std;

//generate all number that has digit 5 or 6 from 1 to n;

//Recursive
void generateNum(queue<int> &q,int n)
{
    queue<int> temp;
    while(!q.empty())
    {
        if(n==0) return;
        cout<<q.front()<<" ";
        temp.push(q.front()*10+5);
        temp.push(q.front()*10+6);
        q.pop();
        n--;
    }
    generateNum(temp,n);
}

//Iterative
void generateNumIterative(queue<string> &q,int n)
{
    q.push("5");
    q.push("6");
    for(int i=0;i<n;i++)
    {
        string curr=q.front();
        cout<<curr<<" ";
        q.pop();
        q.push(curr+"5");
        q.push(curr+"6");
    }
}

int main()
{
    int n;
    cin>>n;
    queue<int> q;
    q.push(5);
    q.push(6);
    // generateNum(q,n);
    queue<string> q2;
    generateNumIterative(q2,n);
    return 0;
}