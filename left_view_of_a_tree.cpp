#include <iostream>
#include<vector>
using namespace std;

// codestudio code
//  ************************************************************

// Following is the TreeNode class structure

template <typename T>
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
};

// ************************************************************

void solve(TreeNode<int> *root, vector<int> &ans, int level)
{
    if (root == NULL)
    {
        return;
    }

    if (level == ans.size())
    {
        ans.push_back(root->data);
    }
    solve(root->left, ans, level + 1);
    solve(root->right, ans, level + 1);
}
vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int> ans;
    int level = 0;
    solve(root, ans, level);
    return ans;
} // codestudio code

int main()
{

    return 0;
}