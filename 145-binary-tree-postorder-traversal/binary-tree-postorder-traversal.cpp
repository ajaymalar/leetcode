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
    void postorder(TreeNode*root,vector<int>&ans)
    {
        if(root==nullptr)
        return;
        postorder(root->left,ans);
        postorder(root->right,ans);
        ans.push_back(root->val);
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==nullptr)
        return {};
        vector<int>ans;
        //postorder(root,ans);
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty())
        {
            TreeNode*node=st.top();
            st.pop();
            ans.push_back(node->val);
            if(node->left!=nullptr)
            st.push(node->left);
            if(node->right!=nullptr)
            st.push(node->right);
        }
         reverse(ans.begin(),ans.end());
         return ans;
    }
};