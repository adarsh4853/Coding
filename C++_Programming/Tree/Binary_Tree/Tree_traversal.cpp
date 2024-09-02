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
//AS -> O(h), h = height of longest root
void inorder(node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

//TC -> O(n)
//AS -> O(h), h = height of longest root
void preorder(node *root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

//TC -> O(n)
//AS -> O(h),h = height of longest root
void postorder(node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
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

    inorder(root);
    cout<<'\n';
    preorder(root);
    cout<<'\n';
    postorder(root);
    return 0;
}