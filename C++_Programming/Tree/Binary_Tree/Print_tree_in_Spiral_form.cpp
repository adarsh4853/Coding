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

//Method 1
vector<vector<int>> zigzagLevelOrder1(node *root)
{
    vector<vector<int>> ans;
    if (root == NULL)
        return ans;
    queue<node *> q;
    q.push(root);
    int cnt;
    bool flag = true;
    while (!q.empty())
    {
        cnt = q.size();
        vector<int> temp;
        for (int i = 0; i < cnt; i++)
        {
            node *curr = q.front();
            q.pop();
            temp.push_back(curr->val);
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
        if (!flag)
            reverse(temp.begin(), temp.end());
        flag = !flag;
        ans.push_back(temp);
    }
    return ans;
}

//Method 2
//Push root to stack s1
//While any of the two stacks is not empty
// 1) while s1 is not empty
//    a) take out a node, store to temp
//    b) push this node's children into s2
// 2) while s2 is not empty
//    a) take out a node, print it
//    b) push this node's children into s2 in reverse order
vector<vector<int>> zigzagLevelOrder2(node *root)
{
    vector<vector<int>> ans;
    if(root==NULL) return ans;
    stack<node *> s1,s2;
    s1.push(root);
    while(!s1.empty() || !s2.empty())
    {   
        vector<int> temp;
        while(!s1.empty())
        {
            node *curr=s1.top();
            s1.pop();
            temp.push_back(curr->val);
            if(curr->left!=NULL) s2.push(curr->left);
            if(curr->right!=NULL) s2.push(curr->right);
        }
        ans.push_back(temp);
        temp.clear();
        while(!s2.empty())
        {
            node *curr=s2.top();
            s2.pop();
            temp.push_back(curr->val);
            if(curr->right!=NULL) s1.push(curr->right);
            if(curr->left!=NULL) s1.push(curr->left);
        }
        ans.push_back(temp);
    }
    return ans;
}
//If we want to print items then method 2 is better, else clearing the vector can be time consuming

int main()
{

    return 0;
}