#include<iostream>
using namespace std;

//codestudio code
#include <map>
/************************************************************

   Following is the TreeNode class structure

   class TreeNode<T>
   {
   public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
   };


 ************************************************************/
TreeNode<int> *buildTreeNode(vector<int> &inOrder, int is, int ie, vector<int> &postOrder, int ps, int pe, map<int, int> &hm)
{
    if ((ps > pe) || (is > ie))
    {
        return NULL;
    }
    TreeNode<int> *root = new TreeNode<int>(postOrder[pe]);
    int inRoot = hm[postOrder[pe]];
    int numLeft = inRoot - is;

    root->left = buildTreeNode(inOrder, is, inRoot - 1, postOrder, ps, ps + numLeft - 1, hm);

    root->right = buildTreeNode(inOrder, inRoot + 1, ie, postOrder, ps + numLeft, pe - 1, hm);
    return root;
}

TreeNode<int> *getTreeFromPostorderAndInorder(vector<int> &postOrder, vector<int> &inOrder)
{
    if (postOrder.size() != inOrder.size())
    {
        return NULL;
    }

    map<int, int> hm;
    for (int i = 0; i < inOrder.size(); ++i)
    {
        hm[inOrder[i]] = i;
    }

    return buildTreeNode(inOrder, 0, inOrder.size() - 1, postOrder, 0, postOrder.size() - 1, hm);
}
// codestudio code

int main()
{
    
    return 0;
}