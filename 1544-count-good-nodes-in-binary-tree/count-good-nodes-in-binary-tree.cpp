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
    int count(TreeNode* temp,int v,int c)
    {
        if(temp==nullptr)
        return c;
        if(temp->val>=v)
        {
            c++;
            v=temp->val;
        }
        c=count(temp->left,v,c);
        c=count(temp->right,v,c);
        return c;
    }
public:
    int goodNodes(TreeNode* root) {
        if(root==nullptr)
        return 0;
        int temp=root->val;
        return count(root,temp,0);
    }
};