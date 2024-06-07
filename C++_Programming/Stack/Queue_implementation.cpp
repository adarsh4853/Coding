#include <bits/stdc++.h>
using namespace std;

struct mystack
{
    queue<int> q,temp;
    int getsize()
    {
        return q.size();
    }
    int top()
    {
        return q.front();
    }
    int popItem()
    {
        q.pop();
        return q.front();
    }
    int pushItem(int x)
    {
        while(!q.empty())
        {
            temp.push(q.front());
            q.pop();
        }
        q.push(x);
        while(!temp.empty())
        {
            q.push(temp.front());
            temp.pop();
        }
    }
};

int main()
{
    
    return 0;
}