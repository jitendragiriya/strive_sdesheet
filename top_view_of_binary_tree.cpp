#include<iostream>
using namespace std;

//codestudio code
#include <map>
/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getTopView(TreeNode<int> *root)
{
    vector<int> view;
    if (root == NULL)
    {
        return view;
    }

    queue<pair<TreeNode<int> *, int>> q;
    map<int, int> mp;
    q.push({root, 0});

    while (!q.empty())
    {
        auto i = q.front();
        q.pop();
        TreeNode<int> *node = i.first;
        int line = i.second;
        if (mp.find(line) == mp.end())
        {
            mp[line] = node->val;
        }
        // If left node is exist
        if (node->left)
        {
            q.push({node->left, line - 1});
        }
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
} // codestudio code

int main()
{
    
    return 0;
}