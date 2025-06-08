/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    void inorder(TreeNode*root,int& small,int& c,int k)
    {
        if(root==nullptr||c>=k)
        return;
        inorder(root->left,small,c,k);
        c++;
        if(c==k)
        {
            small=root->val;
            return;
        }
        inorder(root->right,small,c,k);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        int small=INT_MAX;
        int c=0;
        inorder(root,small,c,k);
        return small;
    }
};