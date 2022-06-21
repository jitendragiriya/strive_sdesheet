#include<iostream>
using namespace std;

//codestudio code
/************************************************************
    Following is the Binary Search Tree node structure

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

void helper(TreeNode<int> *root, int k, int &count, int &largest)
{
    if (root == NULL)
    {
        return;
    }

    helper(root->right, k, count, largest);
    count++;
    if (count == k)
    {
        largest = root->data;
        return;
    }
    helper(root->left, k, count, largest);
}

int KthLargestNumber(TreeNode<int> *root, int k)
{
    int count = 0;
    int largest = -1;
    helper(root, k, count, largest);
    return largest;
}
// codestudio code

int main()
{
    
    return 0;
}