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
    node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

node *insertNode(node *head, int pos, int data)
{
    node *temp = new node(data), *curr = head;
    if(head==NULL && pos==1) return temp;
    if(pos==0) 
    {
        temp->next=head;
        return temp;
    }
    while (pos!=1 && curr->next != NULL)
    {
        curr = curr->next;
        pos=pos-1;
    }
    if (pos==1 || curr->next != NULL)
    {
        temp->next = curr->next;
        curr->next = temp;
    }
    return head;
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);

    int pos, data;
    cin >> pos >> data;
    head = insertNode(head, pos, data);
    printlist(head);
    return 0;
}