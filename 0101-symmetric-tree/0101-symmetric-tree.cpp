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
    bool isSymmetric(TreeNode* root) {
        return helper(root->left,root->right);

    }

    bool helper(TreeNode* leftSubTree , TreeNode* rightSubTree){

        if(leftSubTree == NULL && rightSubTree == NULL) return true;
        if(leftSubTree == NULL || rightSubTree == NULL) return false;

        return leftSubTree->val == rightSubTree->val
            and helper(leftSubTree->left,rightSubTree->right)
            and helper(leftSubTree->right,rightSubTree->left);
    }
};