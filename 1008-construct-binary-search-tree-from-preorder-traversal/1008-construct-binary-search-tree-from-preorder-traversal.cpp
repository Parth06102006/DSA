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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int preorder_size = preorder.size();
        stack<TreeNode*> st;

        TreeNode* root = new TreeNode(preorder[0]);
        st.push(root);

        for(int i=1;i<preorder_size;i++){
            TreeNode* prevNode = NULL;

            while(!st.empty() && st.top()->val < preorder[i]){
                prevNode = st.top();
                st.pop();
            }

            TreeNode* currentNode = new TreeNode(preorder[i]);

            if(prevNode != NULL){
                prevNode->right = currentNode;
            }else{
                TreeNode* topNode = st.top();
                topNode->left = currentNode;
            }

            st.push(currentNode);
            
        }

        return root;
    }
    
};