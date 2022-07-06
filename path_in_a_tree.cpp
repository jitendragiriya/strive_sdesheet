#include<iostream>
using namespace std;

//codestudio code
/*
    template <typename T = int>
    class TreeNode
    {
        public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data)
        {
            this->data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode()
        {
            if (left != NULL)
            {
                delete left;
            }
            if (right != NULL)
            {
                delete right;
            }
        }
    };
*/

void solve(TreeNode<int> *root, vector<int> &ans, int x, bool &isFinded)
{
    if (root == NULL)
    {
        return;
    }

    if (root->data == x)
    {
        ans.push_back(root->data);
        isFinded = true;
        return;
    }

    if (root->left && !isFinded)
    {
        solve(root->left, ans, x, isFinded);
    }
    if (root->right && !isFinded)
    {
        solve(root->right, ans, x, isFinded);
    }
    if (ans.size() > 0)
        ans.push_back(root->data);
}

vector<int> pathInATree(TreeNode<int> *root, int x)
{
    vector<int> ans;
    bool isFinded = false;
    solve(root, ans, x, isFinded);
    reverse(ans.begin(), ans.end());
    return ans;
}
// codestudio code

int main()
{
    
    return 0;
}