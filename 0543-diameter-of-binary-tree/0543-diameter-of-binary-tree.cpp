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
    int diameterOfBinaryTree(TreeNode* root) {
        int max = INT_MIN;
        height(root,max);
        return max;
    }

    int height(TreeNode* root,int &maxi){
        if(root == NULL) return 0;

        int lH = height(root->left,maxi);
        int rH = height(root->right,maxi);

        maxi = max(maxi,lH+rH);

        return 1 + max(lH,rH);
    }
};