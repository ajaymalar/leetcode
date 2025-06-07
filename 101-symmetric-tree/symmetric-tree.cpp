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
    bool Symmetric(TreeNode*L,TreeNode*R)
    {
        if(L==nullptr && R==nullptr)
        return true;
        if(L==nullptr || R==nullptr)
        return false;
        if(L->val!=R->val)
        return false;
        return Symmetric(L->left,R->right) && Symmetric(L->right,R->left);
            
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr)
        return true;
        TreeNode*Left=root->left;
        TreeNode*Right=root->right;
        return Symmetric(Left,Right);
    }
};