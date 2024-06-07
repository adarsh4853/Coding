#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printlist(node *head)
{
    if (head == NULL)
        return;
    node *curr = head;
    do
    {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != head);
}

node *deleteHead(node *head)
{
    if(head==NULL) return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }

    swap(head->data,head->next->data);
    node *temp=head->next;
    head->next=head->next->next;
    delete temp;
    return head;
}


node *deleteKthNode(node *head, int k)
{
    // node *nextnode = head;
    // while (k != 1)
    // {
    //     nextnode = nextnode->next;
    //     k--;
    // }
    // swap(nextnode->data, nextnode->next->data);
    // node *temp=nextnode->next;
    // nextnode->next=nextnode->next->next;
    // delete temp;
    // return head;//Not suitable for deleting tail

    if(head==NULL) return NULL;
    if(k==1) return     deleteHead(head);
    node *curr=head;
    for(int i=0;i<k-2;i++) curr=curr->next;
    node *temp=curr->next;
    curr->next=curr->next->next;
    delete temp;
    return head;//Not suitable for deleting head(have to use another function)
}

int main()
{
    node *head = new node(10);
    head->next = new node(5);
    head->next->next = new node(20);
    head->next->next->next = new node(15);
    head->next->next->next->next = head;

    int k;
    cin >> k;
    head = deleteKthNode(head, k);
    printlist(head);
    return 0;
}