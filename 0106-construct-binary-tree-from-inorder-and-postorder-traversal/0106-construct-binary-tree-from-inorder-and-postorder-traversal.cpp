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

    TreeNode* helper(vector<int> inorder,vector<int> postorder,int startInorder,int endInorder,int startPostorder,int endPostorder)
    {

        if(endPostorder < startPostorder || endInorder < startInorder) return NULL;

        int elem = postorder[endPostorder];
        TreeNode* root = new TreeNode(elem);

        int i=startInorder;
        for(;i<=endInorder;i++){
            if(root->val == inorder[i]){
                break;
            }
        }

        int rightSubTreeSize =  endInorder-i;

        root->left = helper(inorder,postorder,startInorder,i-1,startPostorder,endPostorder-rightSubTreeSize-1);

        root->right = helper(inorder,postorder,i+1,endInorder,endPostorder-rightSubTreeSize,endPostorder-1) ;

        return root;
    }

public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return helper(inorder,postorder,0,inorder.size()-1,0,postorder.size()-1);
    }
};