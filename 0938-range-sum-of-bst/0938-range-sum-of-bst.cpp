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
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        return helper(root,low,high,sum);
    }

    int helper(TreeNode* root,int low ,int high,int &sum){
        if(root == NULL) return sum;

        helper(root->left,low,high,sum);

        if(root->val >= low and root->val <= high) sum += root->val;

        return helper(root->right,low,high,sum);
    }
};