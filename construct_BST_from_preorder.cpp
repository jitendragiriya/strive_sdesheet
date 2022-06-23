#include<iostream>
using namespace std;

//codestudio code
#include <limits.h>
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

    class TreeNode{
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        ~TreeNode() {
            if (left){
                delete left;
            }
            if (right){
                delete right;
            }
        }
    };

*************************************************************/
TreeNode<int> *Build(vector<int> &pre, int &i, int bound)
{
    if (i == pre.size() || pre[i] > bound)
    {
        return NULL;
    }

    TreeNode<int> *root = new TreeNode<int>(pre[i++]);
    root->left = Build(pre, i, root->data);
    root->right = Build(pre, i, bound);
    return root;
}

TreeNode<int> *preOrderTree(vector<int> &preOrder)
{
    int i = 0;
    return Build(preOrder, i, INT_MAX);
} // codestudio code

int main()
{
    
    return 0;
}