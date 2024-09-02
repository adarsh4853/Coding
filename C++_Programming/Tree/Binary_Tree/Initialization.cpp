#include <bits/stdc++.h>
using namespace std;

struct node
{
    int key;
    node *left;
    node *right;
    node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

int main()
{
    node *root=new node(30);
    root->left=new node(40);
    root->right=new node(50);
    root->left->left=new node(70);
    root->right->left=new node(60);
    root->right->right=new node(80);
    return 0;
}