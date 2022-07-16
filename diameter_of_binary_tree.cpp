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
int height(TreeNode<int> *root, int &ans)
{
    if (root == NULL)
    {
        return 0;
    }

    int left = height(root->left, ans);
    int right = height(root->right, ans);
    ans = max(ans, (left + right));

    return 1 + max(left, right);
}

int diameterOfBinaryTree(TreeNode<int> *root)
{
    int ans = 0;
    height(root, ans);
    return ans;
}
// codestudio code

int main()
{
    
    return 0;
}