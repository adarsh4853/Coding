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

node *insertSorted(node *head, int val)
{
    node *temp = new node(val);
    if (head == NULL)
        return temp;
    if (head->data > val)
    {
        temp->next = head;
        return temp;
    }
    node *curr = head;
    while ((curr->next != NULL) && (curr->next->data < val)) // Null checking condition should be first
        curr = curr->next;
    temp->next = curr->next;
    curr->next = temp;
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
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);

    int val;
    cin >> val;
    head = insertSorted(head, val);
    printlist(head);
    return 0;
}