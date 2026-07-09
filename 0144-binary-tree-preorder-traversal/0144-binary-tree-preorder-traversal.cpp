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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> nums;
        preOrder(nums,root);
        return nums;
    }

    void preOrder(vector<int> &nums,TreeNode* node){
        if (node == NULL) return;

        nums.push_back(node->val);
        preOrder(nums,node->left);
        preOrder(nums,node->right);
    }

};