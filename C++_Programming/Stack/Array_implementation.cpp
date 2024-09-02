#include <bits/stdc++.h>
using namespace std;

struct mystack
{
    int *arr;
    int cap;
    int top;
    mystack(int c)
    {
        cap = c;
        arr = new int[c];
        top = -1;
    }
    void push(int x)
    {
        if(top==cap-1)
        {
            cout<<"Stack is full"<<'\n';
            return;
        }
        top++;
        arr[top] = x;
    }
    int pop()
    {
        if (top != -1)
        {
            int ans = arr[top];
            top--;
            return ans;
        }
        cout<<"Stack is empty"<<'\n';
        return INT_MAX;
    }
    int peek()
    {
        if(top==-1)
        {
            cout<<"Stack is empty"<<'\n';
            return INT_MAX;
        }
        return arr[top];
    }
    int size()
    {
        return top + 1;
    }
    bool isempty()
    {
        return (top == -1);
    }
};

int main()
{
    mystack st(12);

    return 0;
}