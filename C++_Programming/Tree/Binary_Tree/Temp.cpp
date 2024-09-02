#include <bits/stdc++.h>
using namespace std;

struct node {
     int val;
     node *left;
     node *right;
     node() : val(0), left(nullptr), right(nullptr) {}
     node(int x) : val(x), left(nullptr), right(nullptr) {}
     node(int x, node *left, node *right) : val(x), left(left), right(right) {}
 };

vector<int> rightSideView(node* root) {
        vector<int> ans;
        if(root==NULL) return ans;
        queue<node *> q;
        q.push(root);
        int cnt=q.size();
        while(!q.empty())
        {
            node *curr=q.front();
            cnt--;
            q.pop();
            if(curr->left!=NULL) q.push(root->left);
            if(curr->right!=NULL) q.push(root->right);
            if(cnt==1)
            {
                ans.push_back(curr->val);
                cnt=q.size();
            }
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

    vector<int> ans=rightSideView(root);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}