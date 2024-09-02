#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    node(int x)
    {
        data=x;
        left=right=NULL;
    }
};


//TC -> O(n)
//AS -> O(h)
int heightofTree(node *root)
{
    if(root==NULL) return 0;
    return max(heightofTree(root->left),heightofTree(root->right))+1;
}

int main()
{
    node *root=new node(10);
    root->left=new node(8);
    root->right=new node(30);
    root->right->left=new node(40);
    root->right->right=new node(50);
    root->right->right->left=new node(50);

    cout<<heightofTree(root);
    return 0;
}