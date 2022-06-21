#include<iostream>
using namespace std;

//codestudio code
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void solve(TreeNode<int> *root, int k, int &count, int &smallest)
{
    if (root == NULL)
    {
        return;
    }

    solve(root->left, k, count, smallest);
    if (++count == k)
    {
        smallest = root->data;
        return;
    }
    solve(root->right, k, count, smallest);
}

int kthSmallest(TreeNode<int> *root, int k)
{
    int smallest = -1;
    int count = 0;
    solve(root, k, count, smallest);
    return smallest;
} // codestudio code

int main()
{
    
    return 0;
}