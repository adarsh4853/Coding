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
        next = NULL;
        prev = NULL;
    }
};

node *insertBegin(node *head, int val)
{
    node *temp = new node(val);
    if(head==NULL) return temp;//Head will be changed in this case only
    temp->next = head;
    head->prev = temp;
    return temp;
}

node *insertEnd(node *head,int val)
{
    node *temp = new node(val);
    if(head==NULL) return temp;
    node *curr=head;

    //go to the last node
    while(curr->next!=NULL) curr=curr->next;

    //Add temp
    curr->next=temp;
    temp->prev=curr;
    return head;
}

void printlist(node *head)
{
    node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

int main()
{
    node *head = new node(35);
    node *temp1 = new node(83);
    node *temp2 = new node(68);

    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;

    head = insertBegin(head, 87);
    head=insertEnd(head,71);

    printlist(head);
    return 0;
}