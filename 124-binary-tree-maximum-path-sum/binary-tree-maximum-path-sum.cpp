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
    int findMaxPath(TreeNode* root,int&maxi)
    {
        if(root==nullptr)
        return 0;
        int l=max(0,findMaxPath(root->left,maxi));
        int r=max(0,findMaxPath(root->right,maxi));
        maxi=max(maxi,l+root->val+r);
        return max(l,r)+root->val;
    }
public:
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        findMaxPath(root,maxi);
        return maxi;
    }
};