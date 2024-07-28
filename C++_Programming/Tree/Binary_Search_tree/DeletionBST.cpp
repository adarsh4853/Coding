#include <bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    node *left,*right;
    node(int x)
    {
        val=x;
        left=right=NULL;
    }
};

node *getSuccesor(node *curr)
{
    curr=curr->right;
    while(curr->left!=NULL) curr=curr->left;
    return curr;
}

node * deleteNode(node *root,int key)
{
    if(root==NULL) return root;
    if(root->val>key) root->left=deleteNode(root->left,key);
    else if(root->val<key) root->right=deleteNode(root->right,key);
    else
    {
        if(root->left==NULL) 
        {
            node *temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL)
        {
            node *temp=root->left;
            delete root;
            return temp;
        }
        else
        {
            node *temp=getSuccesor(root);
            root->val=temp->val;
            root->right=deleteNode(root->right,temp->val);
        }
        return root;
    }
}

int main()
{
    
    return 0;
}