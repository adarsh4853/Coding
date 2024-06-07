#include <bits/stdc++.h>
using namespace std;

// Choose head as front and tail as rear
// If we do reverse then front will be at tail and pop will not be easier because we can't go to previous node

struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

struct myqueue
{
    int currsize;
    node *front, *rear; 

    myqueue()
    {
        front = NULL;
        rear = NULL; 
        currsize=0;
    }

    void enque(int x)//O(1)
    {
        node *temp = new node(x);
        currsize++;
        if (front == NULL)
        {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }
    void deque()//O(1)
    {
        if (front == NULL)
            return;
        currsize--;
        if (front->next == NULL)
        {
            front = rear = NULL;
            return;
        }
        node *temp = front;
        front = front->next;
        delete temp;
    }
    int size()
    {
        return currsize;
    }
    int getfront()
    {
        return front->data;
    }
    int getrear()
    {
        return rear->data;
    }
};

int main()
{

    return 0;
}