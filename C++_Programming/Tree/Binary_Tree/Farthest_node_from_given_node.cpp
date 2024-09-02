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

int height(node *root)
{
    if(root==NULL) return NULL;
    return max(height(root->left),height(root->right))+1;
}

int ans=0;
int farthestNode(node *root,int key)
{
    if(root->val==key) return 1; 
    int var1=farthestNode(root->left,key);
    int var2=farthestNode(root->right,key);
    if (var1!=0) return max(ans,var1+height(root->right));
    if(var2!=0) return max(ans,var2+height(root->left));
}

int binExp(int x,int n)
{
    int ans=1;
    while(n>0)
    {
        if(n&1) ans=ans*x;
        x=x*x;
        n=n>>1;
    }
    return ans;
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

    cout<<farthestNode(root,60);
    return 0;
}