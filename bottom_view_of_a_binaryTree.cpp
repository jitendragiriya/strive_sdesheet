#include<iostream>
using namespace std;

//codestudio code
/*************************************************************

    Following is the Binary Tree node structure.

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

vector<int> bottomView(BinaryTreeNode<int> *root)
{
    vector<int> view;
    if (root == NULL)
    {
        return view;
    }

    map<int, int> mp;
    queue<pair<BinaryTreeNode<int> *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        auto i = q.front();
        q.pop();
        BinaryTreeNode<int> *node = i.first;
        int line = i.second;
        mp[line] = node->data;
        // if left node exist
        if (node->left)
        {
            q.push({node->left, line - 1});
        }
        // if right node exist
        if (node->right)
        {
            q.push({node->right, line + 1});
        }
    }
    for (auto i : mp)
    {
        view.push_back(i.second);
    }
    return view;
}
// codestudio code

int main()
{
    
    return 0;
}