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
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root == NULL) return {};
        if(root->left == NULL && root->right == NULL){
            int node = root->val;
            return {to_string(node)};
        }

        vector<string> ans;
        helper(root,ans,"");

        return ans;

    }

    void helper(TreeNode* root,vector<string> &ans,string val){
        if(root->left == NULL && root->right == NULL) {
            ans.push_back(val + to_string(root->val));
            return ;
        }

        if(root->left){
            helper(root->left,ans,val + to_string(root->val) + "->");
        }
        if(root->right){
            helper(root->right,ans,val + to_string(root->val) + "->");
        }

    }

};