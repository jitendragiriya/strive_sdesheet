#include<iostream>
using namespace std;

//codestudio code
/************************************************************

    Following is the TreeNode class structure

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
TreeNode<int> *buildBST(vector<int> &arr, int start, int end)
{
    if (start > end)
    {
        return NULL;
    }

    int index = start + (end - start) / 2;
    TreeNode<int> *root = new TreeNode<int>(arr[index]);

    root->left = buildBST(arr, start, index - 1);
    root->right = buildBST(arr, index + 1, end);
    return root;
}

TreeNode<int> *sortedArrToBST(vector<int> &arr, int n)
{
    return buildBST(arr, 0, n - 1);
} // codestudio code

int main()
{
    
    return 0;
}