#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

int floor(Node *root, int x)
{
    int ans=-1;
    while(root!=NULL)
    {
        if(root->data==x) 
        {
            return x;
        }
        else if(root->data>x)
        {
            if(root->left==NULL) return ans;
            else root=root->left;
        }
        else
        {
            ans=max(ans,root->data);
            if(root->right!=NULL) root=root->right;
            else return ans;
        }
    }
    return -1;
}

int main()
{

    return 0;
}