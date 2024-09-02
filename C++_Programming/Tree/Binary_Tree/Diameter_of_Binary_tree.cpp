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

//Method 1 - compute the height of left subtree and right subtree for every node and take maximum of all
//TC -> O(n^2)
//AS -> O(n)
int height(node *root)
{
    if (root == NULL)
        return 0;
    else
        return max(height(root->left), height(root->right)) + 1;
}
int diameterOfBinaryTree(node *root)
{
    if (root == NULL)
        return 0;
    return max(1+height(root->left) + height(root->right), max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right)));
}

//Method 2 - use unordered map for storing heights of different root
//TC -> O(n)
//AS -> O(n)

//Method 3 - Modify height function
int ans=0;
int diameterOfBinaryTree(node *root)
{
    if(root==NULL) return 0;
    int lh=diameterOfBinaryTree(root->left);
    int rh=diameterOfBinaryTree(root->right);
    ans=max(ans,1+lh+rh);//Only additional line
    return 1+max(lh,rh);
}
//ans is the answer

int main()
{
    return 0;
}