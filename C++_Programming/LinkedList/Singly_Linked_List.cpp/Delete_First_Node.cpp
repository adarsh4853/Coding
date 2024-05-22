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

//TC -> O(1)
node *deleteFirstNode(node *head)
{
    if(head==NULL) return head;
    else
    {
        node *temp=head->next;
        delete head;
        return temp;
    }
}

void printlist(node *head)
{
    node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<' ';
        curr=curr->next;
    }
    cout<<'\n';
}

int main()
{
    node *head = new node(20);
    head->next = new node(40);
    head->next->next = new node(30);
    head->next->next->next = new node(10);

    cout<<"Before deleting: ";
    printlist(head);

    head = deleteFirstNode(head);

    cout<<"After deleting: ";
    printlist(head);
    return 0;
}