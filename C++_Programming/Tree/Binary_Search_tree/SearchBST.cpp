#include <bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    node *left, *right;
    node(int x)
    {
        val = x;
        left = right = NULL;
    }
};

// TC -> O(h), h = height of binary tree
// AS -> recursive = O(h), iterative = O(1)
node *searchBST(node *root, int val)
{
    if (root == NULL)
        return NULL;
    if (root->val == val)
        return root;
    else if (root->val > val)
        return searchBST(root->left, val);
    else
        return searchBST(root->right, val);
}

// TC -> O(h), h = height of binary tree
// AS -> recursive = O(h), iterative = O(1)
node *insertIntoBST(node *root, int val)
{
    node *temp = new node(val), *curr = root;
    if (root == NULL)
        return temp;
    while (true)
    {
        if (val > curr->val)
        {
            if (curr->right != NULL)
                curr = curr->right;
            else
            {
                curr->right = temp;
                return root;
            }
        }
        else
        {
            if (curr->left != NULL)
                curr = curr->left;
            else
            {
                curr->left = temp;
                return root;
            }
        }
    }
    return root;
}

int main()
{
    return 0;
}