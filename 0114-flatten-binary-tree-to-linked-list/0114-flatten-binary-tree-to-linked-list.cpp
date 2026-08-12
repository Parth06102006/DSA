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
    void flatten(TreeNode* root) {

        if(root == NULL) return;

        vector<TreeNode*> nums;
        preOrder(root,nums);
        for(int i=0;i<nums.size()-1;i++){
            TreeNode* currentNode = nums[i];
            currentNode->right = nums[i+1];
            currentNode->left = NULL;
        }
    }

    void preOrder(TreeNode* root,vector<TreeNode*> &nums){
        if(root == NULL) return;

        nums.push_back(root);
        preOrder(root->left,nums);
        preOrder(root->right,nums);
    }
};