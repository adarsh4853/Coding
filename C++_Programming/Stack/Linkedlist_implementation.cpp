#include <bits/stdc++.h>
using namespace std;

//using head end is easier becuase then pop,peek,push all be done in constant time

struct node
{
    int val;
    node *next;
    node(int x)
    {
        val=x;
        next=NULL;
    }
};

struct mystack
{
    node *head;
    int cap,top;

    mystack(int x)
    {
        top=0;
        cap=x;
        head=NULL;
    }

    void push(int x)
    {
        if(top==cap)
        {
            cout<<"Stack is full";
            return;
        }
        top++;
        node *temp=new node(x);
        temp->next=head;
        head=temp;
    }
    int pop()
    {
        if(head==NULL) return INT_MAX;
        node *temp=head;
        int res=head->val;
        head=head->next;
        delete temp;
        return res;
    }
    int size()
    {
        return top;
    }
    bool isempty()
    {
        return (head==NULL);
    }
    int peek()
    {
        if(head==NULL) return INT_MAX;
        return head->val;
    }
};

int main()
{
    mystack st(10);
    return 0;
}