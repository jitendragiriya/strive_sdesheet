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

int floorInBST(TreeNode<int> *root, int X)
{
    int ans = INT_MIN;
    int big = INT_MIN;

    while (root != NULL)
    {
        if (root->val <= X)
        {
            ans = max(root->val, big);
            big = root->val;
        }
        if (X > root->val)
        {
            root = root->right;
        }
        else
        {
            root = root->left;
        }
    }
    return ans;
} // codestudio code

int main()
{
    
    return 0;
}