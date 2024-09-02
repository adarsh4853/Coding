#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    node (int x)
    {
        data=x;
        left=right=NULL;
    }
};

//TC -> O(n)
//AS -> O(h)
void printAtK(node *root,int k)
{
    if(root == NULL) return;
    if(k==0) 
    {
        cout<<root->data<<" ";
        return;
    }
    printAtK(root->left,k-1);
    printAtK(root->right,k-1);
}

int main()
{
    node *root=new node(10);
    root->left=new node(20);
    root->right = new node(30);
    root->left->left=new node(40);
    root->left->right=new node(50);
    root->left->right->left=new node(70);
    root->left->right->right=new node(80);
    root->right->right=new node(60);

    int k;
    cin>>k;

    printAtK(root,k);
    return 0;
}