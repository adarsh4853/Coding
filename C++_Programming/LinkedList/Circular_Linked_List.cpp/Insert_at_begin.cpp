#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node (int x)
    {
        data=x;
        next=NULL;
    }
};

node *insertBegin(node *head,int val)
{
    // node *temp=new node(val);
    // if(head==NULL)
    // {
    //     temp->next=temp;
    //     return temp;
    // }
    // temp->next=head;
    // node *curr=head;
    // do{curr=curr->next;}
    // while(curr->next!=head);
    // curr->next=temp;
    // return temp;

    //Efficient Approach
    node *temp=new node(val);
    temp->next=head->next;
    head->next=temp;
    swap(head->data,temp->data);
    return head;
}

void printlist(node* head)
{
    if(head==NULL) return;
    node *curr=head;
    do
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    } while (curr!=head);
}

int main()
{
    node *head=new node(10);
    // head->next=head;
    head->next=new node(20);
    head->next->next=head;

    head = insertBegin(head,68);
    head = insertBegin(head,26);
    head = insertBegin(head,93);
    printlist(head);
    return 0;
}