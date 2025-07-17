class Solution {
    int countPaths(TreeNode* temp, long long target, long long sum) {
        if (temp == nullptr)
            return 0;

        int c = 0;
        sum += temp->val;

        if (sum == target)
            c++;

        c += countPaths(temp->left, target, sum);
        c += countPaths(temp->right, target, sum);

        return c;
    }

public:
    int pathSum(TreeNode* root, int targetSum) {
        if (root == nullptr)
            return 0;

        return countPaths(root, targetSum, 0) 
             + pathSum(root->left, targetSum) 
             + pathSum(root->right, targetSum);
    }
};
