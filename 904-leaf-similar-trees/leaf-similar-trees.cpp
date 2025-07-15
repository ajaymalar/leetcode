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
    void getLeaves(TreeNode*root,vector<int>&v)
    {
        if(root==nullptr)
        return;
        if(!root->left && !root->right)
           { v.push_back(root->val);
            return;}
            getLeaves(root->left,v);
            getLeaves(root->right,v);
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if(root1==nullptr || root2==nullptr)
        return false;
        vector<int>l1,l2;
        getLeaves(root1,l1);
        getLeaves(root2,l2);
        return l1==l2;
        
    }
};