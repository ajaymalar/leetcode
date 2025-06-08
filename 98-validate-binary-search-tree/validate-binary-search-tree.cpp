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
    bool check(TreeNode*root,long min,long max)
    {
        if(root==nullptr)
        return true;
        if(root->val<=min ||root->val>=max)
        return false;
        bool l=check(root->left,min,root->val);
        bool r=check(root->right,root->val,max);
        return l&&r;
    }
public:
    bool isValidBST(TreeNode* root) {
      return check(root,LONG_MIN,LONG_MAX);
    }
};
/* if(root==nullptr)
        return true;
        if(root->left!=nullptr)
        {
            if(root->val<=root->left->val || !isValidBST(root->left))
            return false;
        }
        if(root->right!=nullptr)
        {
            if(root->val>=root->right->val || !isValidBST(root->right))
            return false;
        }
        if(root->val>l->val && root->val < r->val)
        {
            isValidBST(l);
            isValidBST(r);
            return true;*/