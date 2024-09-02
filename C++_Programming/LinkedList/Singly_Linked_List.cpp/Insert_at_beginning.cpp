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

void printlist(node *head)
{
    node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<'\n';
}

//TC -> O(1)
node *insertbegin(node *head, int val)
{
    node *temp = new node(val);
    temp->next=head;
    return temp;
}

int main()
{
    node *head = NULL;
    head=insertbegin(head,20);
    head=insertbegin(head,30);
    head=insertbegin(head,40);

    printlist(head);
    return 0;
}