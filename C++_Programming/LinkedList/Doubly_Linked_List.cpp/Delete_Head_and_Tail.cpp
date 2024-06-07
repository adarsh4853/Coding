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
        next = prev = NULL;
    }
};

node *deleteHead(node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    node *newhead = head->next;
    delete head;
    newhead->prev = NULL;
    return newhead;
}

node *deleteTail(node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    node *temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;
    delete temp->next;
    temp->next = NULL;
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
    node *head = new node(40);
    head->next = new node(90);
    head->next->prev = head;

    // head = deleteHead(head);
    head = deleteTail(head);
    printlist(head);
    return 0;
}