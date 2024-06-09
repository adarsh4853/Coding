#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

// Inefficient -> use height of tree and print every element at distance 0 to height of tree one by one
// Efficient -> use queue

// TC -> theta(n)
// AS -> O(n) or theta(W), where W = width of tree
void bredthFirst(node *root)
{
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *curr = q.front();
        cout << curr->data << " ";
        q.pop();
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
}

// Better way to implement(for different questions)
void bredthFirstModified(node *root)
{
    queue<node *> q;
    q.push(root);
    int cnt;
    while (!q.empty())
    {
        cnt = q.size();
        for (int i = 0; i < cnt; i++)
        {
            node *curr = q.front();
            cout << curr->data << " ";
            q.pop();
            if (curr->left != NULL) q.push(curr->left);
            if (curr->right != NULL) q.push(curr->right);
        }
    }
}

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->left->right->left = new node(70);
    root->left->right->right = new node(80);
    root->right->right = new node(60);

    bredthFirstModified(root);
    return 0;
}