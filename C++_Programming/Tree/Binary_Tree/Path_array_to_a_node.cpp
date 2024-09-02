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

//O(n)
bool makePathArray(node *root,vector<node *> &path,int key)
{
    if(root==NULL) return false;
    path.push_back(root);   
    if(root->val==key) return true;
    if(makePathArray(root->left,path,key)||makePathArray(root->right,path,key)) return true;
    path.pop_back();
    return false;
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

    vector<node *> path;
    makePathArray(root,path,80);
    for(int i=0;i<path.size();i++) cout<<path[i]->val<<" ";
    return 0;
}