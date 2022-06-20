#include <iostream>
using namespace std;

// codestudio code
/*****************************************************

    Following is the Binary Tree node structure:

    class BinaryTreeNode {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

******************************************************/

bool helper(BinaryTreeNode<int> *LeftNode, BinaryTreeNode<int> *RightNode)
{
    if (LeftNode == NULL && RightNode == NULL)
    {
        return true;
    }

    return (LeftNode->data == RightNode->data) && helper(LeftNode->left, RightNode->right) && helper(LeftNode->right, RightNode->left);
}

bool isSymmetric(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return true;
    }
    return helper(root->left, root->right);

} // codestudio code

int main()
{

    return 0;
}