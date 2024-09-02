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

node *deleteHead(node *head)
{
    if(head==NULL) return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }

    //Efficient Approach
    swap(head->data,head->next->data);
    node *temp=head->next;
    head->next=head->next->next;
    delete temp;
    return head;
}

int main()
{
    node *head=new node(10);
    head->next=new node(5);
    head->next->next= new node(20);
    head->next->next->next= new node(15);
    head->next->next->next->next=head;

    head=deleteHead(head);
    printlist(head);
    return 0;
}