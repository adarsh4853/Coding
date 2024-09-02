#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left,*right;
    node(int x)
    {
        data=x;
        left=right=NULL;
    }
};

//TC -> O(n)
//AS -> O(h)
int findmax(node *root)
{
    if(root!=NULL) return max(root->data,max(findmax(root->left),findmax(root->right)));
    else return INT_MIN;
}
//Use level order traversal(bredth first traversal) for iterative approach

//For perfect binary tree, recusrive on will be better
//And for skewed binary tree iterative will be better because queue will have atmost one element.

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

    cout<<findmax(root)<<"\n";
    return 0;
}