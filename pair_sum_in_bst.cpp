#include<iostream>
using namespace std;

//codestudio code
/**********************************************************

    Following is the Binary Tree Node structure:

    template <typename T>
    class BinaryTreeNode {
        public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };
***********************************************************/
void inorder(BinaryTreeNode<int> *root, vector<int> &nums)
{
    // left call
    if (root->left)
        inorder(root->left, nums);

    nums.push_back(root->data);

    // right call
    if (root->right)
        inorder(root->right, nums);
}

bool pairSumBst(BinaryTreeNode<int> *root, int k)
{
    if (root == NULL)
    {
        return false;
    }

    // solution 1: store elements in array in sorted order using inorder traversal and than go for two pointer approach

    vector<int> nums;
    inorder(root, nums); // it gives sorted array

    int i = 0, j = nums.size() - 1;
    while (i <= j)
    {
        int sum = nums[i] + nums[j];
        if (sum == k)
        {
            return true;
        }

        if (sum < k)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    return false;
} // codestudio code

int main()
{
    
    return 0;
}