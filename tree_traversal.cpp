#include<iostream>
using namespace std;

//codestudio code
/************************************************************

    Following is the Binary Tree node structure:

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


************************************************************/
void solve(BinaryTreeNode<int> *root, vector<int> &inOrder, vector<int> &preOrder, vector<int> &postOrder)
{
    // base case
    if (root == NULL)
        return;

    // left part
    preOrder.push_back(root->data);
    solve(root->left, inOrder, preOrder, postOrder);
    inOrder.push_back(root->data);
    solve(root->right, inOrder, preOrder, postOrder);
    postOrder.push_back(root->data);
}

vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root)
{
    vector<int> inOrder;
    vector<int> preOrder;
    vector<int> postOrder;

    solve(root, inOrder, preOrder, postOrder);
    vector<vector<int>> ans;
    ans.push_back(inOrder);
    ans.push_back(preOrder);
    ans.push_back(postOrder);
    return ans;
} // codestudio code

int main()
{
    
    return 0;
}