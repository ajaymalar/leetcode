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
public:
    int maxLevelSum(TreeNode* root) {
        if(root==nullptr)
        return 0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,1});
        map<int,int>mpp;
        while(!q.empty())
        {
            auto it=q.front();
            TreeNode* n=it.first;
            int c=it.second;
            q.pop();
            mpp[c]+=n->val;
                if(n->left!=nullptr)
                q.push({n->left,c+1});
                if(n->right!=nullptr)
                q.push({n->right,c+1});
        }
        int maxi=INT_MIN,level=0;
        for(auto it:mpp)
        {
            if(it.second>maxi)
            {
                maxi=it.second;
                level=it.first;
            }
        }
        return level;
    }
};