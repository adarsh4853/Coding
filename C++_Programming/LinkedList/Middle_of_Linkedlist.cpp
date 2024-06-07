#include <bits/stdc++.h>
using namespace std;

//get to the middle node of linked list
//if there are two middle then go to the second one

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

//Maintain two pointers slow and fast. fast will move by two node and slow will move by one node at a time.
//when fast will be on the end or the last node of linked list then slow will be one middle node.
void printMidData(node *head)
{
    node *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<slow->data;
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next=new node(40);

    printMidData(head);
    return 0;
}