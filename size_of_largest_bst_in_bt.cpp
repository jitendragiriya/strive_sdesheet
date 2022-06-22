#include<iostream>
using namespace std;

//codestudio code
/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
class NodeValue
{
public:
    int minNode, maxNode, maxSize;
    NodeValue(int minNode, int maxNode, int maxSize)
    {
        this->minNode = minNode;
        this->maxNode = maxNode;
        this->maxSize = maxSize;
    }
}

NodeValue
largestBSThelper(TreeNode<int> *root)
{
    if (!root)
    {
        return NodeValue(INT_MIN, INT_MAX, 0);
    }

    auto left = largestBSThelper(root->left);
    auto right = largestBSThelper(root->right);

    if (left.maxNode < root->data && root->data < right.maxNode)
    {
        return NodeValue(min(root->data, left.minNode), max(root->data, right.maxNode), left.maxSize + right.maxSize + 1);
    }
    return NodeValue(INT_MIN, INT_MAX, max(left.maxSize, right.maxSize));
}

int largestBST(TreeNode<int> *root)
{
    return largestBSThelper(root).maxSize;
}
// codestudio code

int main()
{
    
    return 0;
}