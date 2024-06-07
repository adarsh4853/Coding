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

node *insertEnd(node *head,int val)
{
    // node *temp=new node(val);
    // if(head==NULL)//head will be change in this case oooonly:O
    // {
    //     temp->next=temp;
    //     return temp;
    // }
    // node *curr=head;
    // while(curr->next!=head) curr=curr->next;
    // temp->next=curr->next;
    // curr->next=temp;
    // return head;

    //Efficient Approach
    //Insert at second position then change data of head and temp
    node *temp=new node(val);
    temp->next=head->next;
    head->next=temp;
    swap(head->data,temp->data);
    return temp;
}

void printlist(node *head)
{
    node *curr=head;
    do{
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    while(curr!=head);
}

int main()
{
    node *head=new node(10);
    head->next=new node(45);
    head->next->next=head;

    head = insertEnd(head,24);
    head = insertEnd(head,24);
    head = insertEnd(head,24);
    printlist(head);
    return 0;
}