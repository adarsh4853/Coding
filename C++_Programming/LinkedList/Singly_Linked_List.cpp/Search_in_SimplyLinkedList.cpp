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

int searchIterative(node *head,int target)
{
    int cnt=1;
    node *curr=head;
    while(curr!=NULL)
    {
        if(target==curr->data) return cnt;
        cnt++;
        curr=curr->next;
    }
    return -1;
}

int searchRecursive(node *head,int target)
{
    if(head==NULL) return -1; 
    if(head->data==target) return 1;
    else
    {
        int ans=searchRecursive(head->next,target);
        if(ans==-1) return -1;
        return (ans+1);
    }
}

node *insertbegin(node *head,int val)
{
    node *temp=new node(val);
    temp->next=head;
    return temp;
}

int main()
{
    node *head=new node(55);
    head=insertbegin(head,25);
    head=insertbegin(head,74);
    head=insertbegin(head,65);// 65 -> 74 -> 25 -> 55

    int target;
    cin>>target;
    cout<<searchIterative(head,target)<<" ";
    cout<<searchRecursive(head,target);
    return 0;
}