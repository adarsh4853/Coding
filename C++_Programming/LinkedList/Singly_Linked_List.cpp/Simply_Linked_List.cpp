#include <bits/stdc++.h>
using namespace std;

// 10 -> 20 -> 30

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

int main()
{
    // Basic Implementation
    node *head = new node(10);
    node *temp1 = new node(20);
    node *temp2 = new node(30);

    head->next = temp1;
    temp1->next = temp2;

    // Shorter
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    return 0;
}