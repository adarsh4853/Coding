#include <bits/stdc++.h>
using namespace std;

// Serialization -> Storing the tree data in a string or in a array such a way so that we can make tree again from that data.
// Deaserialization -> Making tree again from that data stored in string or in array. 

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

//TC -> theta(n)
void serialize(node *root,vector<int> &arr)
{
    if(root==NULL)
    {
        arr.push_back(-1);
        return;
    }
    arr.push_back(root->val);
    serialize(root->left,arr);
    serialize(root->right,arr);
}// array size = 2*n+1

//TC -> theta(n)
int ind=0;
node *deserialize(vector<int> &arr)
{
    // if(ind=arr.size()) return NULL;
    if(arr[ind]==-1) return NULL;
    node *temp=new node(arr[ind++]);
    temp->left=deserialize(arr);
    temp->right=deserialize(arr);
    return temp;
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
    
    vector<int> arr;
    serialize(root,arr);

    deserialize(arr);
    arr.clear();
    serialize(root,arr);

    for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
    return 0;
}