#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
    node(int x)
    {
        data = x;
        next=prev=NULL;
    }
};

node *reverseList(node *head)
{
    if(head==NULL || head->next==NULL) return head; 
    node *curr=head,*prev=NULL;
    while(curr!=NULL)
    {
        prev=curr->prev;
        // swap(curr->next,curr->prev);//don't use swap function because then we can't get our desired head.
        curr->prev=curr->next;
        curr->next=prev;
        curr=curr->prev;
    }
    return prev->prev;
}

void printlist(node *head)
{
    node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main()
{
    node *head=new node(10);
    head->next = new node(20);
    head->next->prev=head;
    head->next->next = new node(30);
    head->next->next->prev = head->next;//10->20->30

    head = reverseList(head);

    printlist(head);
    return 0;
}