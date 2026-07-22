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
    int countNodes(TreeNode* root) {
        return helper(root,0);
    }

    int helper(TreeNode* root , int cnt){
        if (root == NULL) {
            return 0;
        }

        int leftCnt = helper(root->left,cnt);
        int rightCnt = helper(root->right,cnt);

        return leftCnt + rightCnt + 1;
    }
};