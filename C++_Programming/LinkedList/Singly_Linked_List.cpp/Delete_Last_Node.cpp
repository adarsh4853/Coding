#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};

node *deleteTail(node *head)
{
    if(head==NULL) return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    node *temp=head;
    while(temp->next->next != NULL)
    {
        temp=temp->next;
    }
    delete temp->next;//First deallocate the memory then make temp->next NULL.
    temp->next =  NULL;
    return head;
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
    head->next->next =new node(30);
    head->next->next->next=new node(40);

    head = deleteTail(head);
    printlist(head);
    return 0;
}