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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> nums;
        inOrder(nums,root);
        return nums;
    }

    void inOrder(vector<int> &nums,TreeNode* node){
        if (node == NULL) return ;

        inOrder(nums,node->left);
        nums.push_back(node->val);
        inOrder(nums,node->right);
    }
};