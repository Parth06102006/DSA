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
    void inOrder(TreeNode* root,vector<TreeNode*> &nodes){
        if(root == NULL) return;

        inOrder(root->left,nodes);
        nodes.push_back(root);
        inOrder(root->right,nodes);
    }

public:
    void recoverTree(TreeNode* root) {
        vector<TreeNode*> nodes;

        inOrder(root,nodes);
        
        TreeNode* firstElement = NULL;
        TreeNode* lastElement = NULL;

        for(int i=1;i<nodes.size();i++){

            if(firstElement == NULL){
                if(nodes[i]->val < nodes[i-1]->val) firstElement =  nodes[i-1];
            }

            if(lastElement == NULL){
                if(nodes[nodes.size()-i-1]->val > nodes[nodes.size()-i]->val) lastElement = nodes[nodes.size()-i];
            }

            if(firstElement != NULL && lastElement != NULL) {
                break;
            }

        }

        int temp = firstElement->val;
        firstElement->val = lastElement->val;
        lastElement->val = temp;

    }
};