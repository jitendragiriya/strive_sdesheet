#include<iostream>
using namespace std;

//codestudio code
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/

void solve(TreeNode *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }

    ans.push_back(root->data);

    // recursive calls
    if (root->left)
    {
        solve(root->left, ans);
    }
    if (root->right)
    {
        solve(root->right, ans);
    }
}

vector<int> getPreOrderTraversal(TreeNode *root)
{
    vector<int> ans;
    solve(root, ans);
    return ans;
} // codestudio code

int main()
{
    
    return 0;
}