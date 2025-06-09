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
class BSTIterator {
    private: stack<TreeNode*>st;
    void left(TreeNode*root)
    {
        TreeNode*temp=root;
        while(temp!=nullptr)
        {
            st.push(temp);
            temp=temp->left;
        }
    }
public:
    BSTIterator(TreeNode* root) {
        left(root);
    }
    
    int next() {
        TreeNode*temp=st.top();
        st.pop();
        left(temp->right);
        return temp->val;
    }
    
    bool hasNext() {
        if(!st.empty())
        return true;
        return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */