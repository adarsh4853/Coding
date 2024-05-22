#include <bits/stdc++.h>
using namespace std;

// 20 -> 40 -> 30 -> 10

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

void printlist(node *head)//TC -> O(n), AS -> O(1)
{
    // for(auto i = head;;i=i->next)
    // {
    //     cout<<i->data<<" ";
    //     if(i->next == NULL) break;
    // }
    node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

void printlistRecursive(node *curr)//TC -> O(n), AS -> O(n)
{
    if(curr==NULL) return;
    cout<<curr->data<<" ";
    printlistRecursive(curr->next);
}

int main()
{
    node *head = new node(20);
    head->next = new node(40);
    head->next->next = new node(30);
    head->next->next->next = new node(10);

    printlist(head);
    cout<<'\n';
    printlistRecursive(head); 
    return 0;
}