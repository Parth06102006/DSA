/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {

    bool getAncestors(TreeNode* root,TreeNode* p,vector<TreeNode*> &nums){

        if(root == NULL) return false;

        if(root == p) {nums.push_back(root);return true;}

        if( getAncestors(root->left,p,nums) || getAncestors(root->right,p,nums)){
            nums.push_back(root);
            return true;
        }

        return false;
    }

public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> ancestorsP;
        vector<TreeNode*> ancestorsQ;

        getAncestors(root,p,ancestorsP);
        getAncestors(root,q,ancestorsQ);

        int i = ancestorsP.size()-1;
        int j = ancestorsQ.size()-1;

        while(i >= 0 and j>=0 and ancestorsP[i]->val == ancestorsQ[j]->val) {
            i--;j--;
        }

        return ancestorsP[i+1];

    }
};