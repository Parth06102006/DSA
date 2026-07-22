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
    bool hasPathSum(TreeNode* root, int targetSum) {
        return helper(root,0,targetSum);
    }

    bool helper(TreeNode* root,int sum,int targetSum){
        if(root == NULL) return false;
        
        int new_Sum = sum + root->val;
        
        if((new_Sum == targetSum) && (root->left == NULL && root->right == NULL))  return true;

        if(helper(root->left,new_Sum,targetSum)) return true;


        if(helper(root->right,new_Sum,targetSum)) return true;

        return false;

    }

};