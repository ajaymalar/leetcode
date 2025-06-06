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
    void inorder(TreeNode*root,vector<int>&ans)
    {
        if(root==nullptr)
        return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        /*vector<int>ans;
        //inorder(root,ans);
        if(root==nullptr)
        return ans;
        stack<TreeNode*>st;
        TreeNode*cur=root;
        while(cur!=nullptr|| !st.empty())
        {
            while(cur!=nullptr)
            {
                st.push(cur);
                cur=cur->left;
            }
            cur=st.top();
            st.pop();
            ans.push_back(cur->val);
            cur=cur->right;
        }
        return ans;*/
        vector<int>ans;
        TreeNode*cur=root;
        while(cur!=nullptr)
        {
            if(cur->left==nullptr)
            {
                ans.push_back(cur->val);
                cur=cur->right;
            }
            else if(cur->left!=nullptr)
            {
                TreeNode*pre=cur->left;
                while(pre->right && pre->right!=cur)
                {
                    pre=pre->right;
                }
                if(pre->right==nullptr)
                {
                    pre->right=cur;
                    cur=cur->left;
                }
                else
                {
                    pre->right=nullptr;
                    ans.push_back(cur->val);
                    cur=cur->right;
                }
                
            }
        }
        return ans;
    }
};