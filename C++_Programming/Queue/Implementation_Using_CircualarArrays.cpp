#include <bits/stdc++.h>
using namespace std;

struct myqueue
{
    int *arr, currsize, cap,front;
    myqueue(int n)
    {
        currsize = 0;
        cap = n;
        front =0;
        arr = new int[n];
    }
    void push(int x)
    {
        if (isfull())
        {
            cout << "Queue is full";
            return;
        }
        int rear=getRear();
        rear=(rear+1)%cap;
        arr[rear]=x;
        currsize++;
    }
    void pop()
    {
        if (isempty()) return;
        front=(front+1)%cap;
        currsize--;
    }
    int getRear()
    {
        if(isempty()) return -1;
        return (front+currsize-1)%cap;
    }
    int getFront()
    {
        if(isempty()) return -1;
        else return front;
    }
    bool isempty()
    {
        return (currsize == 0);
    }
    bool isfull()
    {
        return (currsize==cap);
    }
    int size()
    {
        return currsize;
    }
    int frontelem()
    {
        return arr[front];
    }
};

int main()
{
    myqueue q(10);
    for(int i=0;i<8;i++)
    {
        int randomInt=rand()%100;
        q.push(randomInt);
        // if(randomInt%2)
        // {
        //     q.pop();
        // }
    }
    while(!q.isempty())
    {
        cout<<q.frontelem()<<" ";
        q.pop();
    }
    return 0;
}