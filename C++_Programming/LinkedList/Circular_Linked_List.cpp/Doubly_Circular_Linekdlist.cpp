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
        next = prev = NULL;
    }
};

node *insertBeginning(node *head,int val)
{
    node *temp=new node(val);
    if(head==NULL)
    {
        temp->next=temp;
        temp->prev=temp;
    }
    head->prev->next=temp;
    temp->prev=head->prev;
    temp->next=head;
    head->prev=temp;
    return temp;
    //For insert at the end return head.
}

void printlist(node *head)
{
    node *curr=head;
    do
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    } while (curr!=head);
}

int main()
{
    node *head = new node(10);
    head->next=new node(5);
    head->next->prev=head;
    head->next->next=new node(43);
    head->next->next->prev=head->next;
    head->next->next->next = head;
    head->prev=head->next->next;

    head = insertBeginning(head,79);
    printlist(head);
    return 0;
}