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
    TreeNode* deleteNode(TreeNode* root, int key) {

        if (root == NULL) {
            return NULL;
        }

        if( key < root->val ){
            root->left = deleteNode(root->left,key);
        }else if(key > root->val){
            root->right = deleteNode(root->right,key);
        }else{

            // no child
            if(root -> left == NULL and root->right == NULL){
                // delete root;
                return NULL;
            }else if(root->left != NULL and root->right != NULL) {// two child
                int mx = Max(root->left);
                cout<<"MAXIMUM VALUE : "<<mx;
                root->val = mx;

                root->left = deleteNode(root->left,mx);

                return root;

            }else if(root->left != NULL and root->right == NULL){
                
                TreeNode* m =  root->left;
                // delete root;
                return m;
            }else{
                TreeNode* m =  root->right;
                // delete root;
                return m;
            }
        }

        return root;

    }

    int Max(TreeNode* root){

        
        if(root->right == NULL){
            return root->val;
        }

        return Max(root->right);;
    }


};