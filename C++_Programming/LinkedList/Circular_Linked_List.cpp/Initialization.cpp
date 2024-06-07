#include <bits/stdc++.h>
using namespace std;

struct node 
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next=NULL;
    }
};

void printlist(node *head)
{
    if(head==NULL) return;
    node *curr=head->next;
    // do
    // {
    //     cout<<curr->data<<" ";
    //     curr=curr->next;
    // } while (curr!=head);
    cout<<head->data<<" ";
    while(curr!=head)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main()
{
    node *head= new node(10);
    // node *temp1=new node(5);    
    // node *temp2=new node(20);
    // node *temp3=new node(15);
    // head->next=temp1;
    // temp1->next=temp2;
    // temp2->next=temp3;
    // temp3->next=head;

    head->next=new node(5);
    head->next->next= new node(20);
    head->next->next->next= new node(15);
    head->next->next->next->next=head;

    printlist(head);
    return 0;
}