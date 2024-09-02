#include <bits/stdc++.h>
using namespace std;

struct myqueue
{
    int *arr, size, cap;
    myqueue(int n)
    {
        size = 0;
        cap = n;
        arr = new int[n];
    }
    void enqueue(int x)
    {
        if (size == cap)
        {
            cout << "Queue is full";
            return;
        }
        arr[size] = x;
        size++;
    }
    int dequeue()//O(n)
    {
        if (isempty()) return;
        for(int i=0;i<size-1;i++)
        {
            arr[i]=arr[i+1];
        }
        size--;
    }
    bool isempty()
    {
        return (size == 0);
    }
    bool isfull()
    {
        return (size==cap);
    }

    int size()
    {
        return size;
    }
};

int main()
{
    myqueue q(10);
    return 0;
}