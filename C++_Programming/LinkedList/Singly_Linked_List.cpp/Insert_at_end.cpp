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

//TC -> O(n)
node *insertEnd(node *head, int val)
{
    node *temp = new node(val);
    if (head == NULL)
        return temp; // This case should be handled explicitly because NULL->next(loop condition) is undefined.

    node *curr = head;

    //Get to the last node of the linked list to change its pointer to temp
    while (curr->next != NULL)//Use this condition to go to the last node, don't use curr!=NULL becuase then you will go to NULL not on last node
        curr = curr->next;
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
    node *head = NULL;
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    head = insertEnd(head, 40);
    head = insertEnd(head, 50);

    printlist(head);
    return 0;
}