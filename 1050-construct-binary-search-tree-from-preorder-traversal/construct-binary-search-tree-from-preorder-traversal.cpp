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
    TreeNode*construct(vector<int>&preorder,int start,int n)
    {
        if(start>n)
        return nullptr;
        TreeNode*root=new TreeNode(preorder[start]);
        int split=start+1;
        while(split<=n && preorder[split]<root->val)
        split++;
            root->left=construct(preorder,start+1,split-1);
            root->right=construct(preorder,split,n);
    return root;
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n=preorder.size();
        if(n==0)
        return nullptr;
        return construct(preorder,0,n-1);
    }
};