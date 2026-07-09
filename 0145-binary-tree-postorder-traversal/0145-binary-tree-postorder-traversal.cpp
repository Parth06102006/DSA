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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> nums;
        postOrder(nums,root);
        return nums;
    }

    void postOrder(vector<int> &nums,TreeNode* node){
        if(node == NULL) return;

        postOrder(nums,node->left);
        postOrder(nums,node->right);
        nums.push_back(node->val);
    }
};