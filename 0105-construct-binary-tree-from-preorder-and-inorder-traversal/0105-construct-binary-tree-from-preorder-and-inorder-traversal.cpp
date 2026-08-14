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

    TreeNode* helper(vector<int> preorder,vector<int> inorder,int startPreOrder,int endPreOrder,int startInOrder,int endInOrder){

        if(startPreOrder >= endPreOrder || startInOrder >= endInOrder) return NULL;

        TreeNode* root = new TreeNode(preorder[startPreOrder]);

        int i=startInOrder;

        for(;i<endInOrder;i++){
            if(root->val == inorder[i]){
                break;
            }
        }

        int leftSize = i-startInOrder;


        // I have to add params here
        root->left = helper(preorder,inorder,startPreOrder+1,leftSize+startPreOrder+1,startInOrder,i);
        root->right = helper(preorder,inorder,leftSize+startPreOrder+1,endPreOrder,i+1,endInOrder);

        return root;
    }

public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return helper(preorder,inorder,0,preorder.size(),0,inorder.size());
    }
};