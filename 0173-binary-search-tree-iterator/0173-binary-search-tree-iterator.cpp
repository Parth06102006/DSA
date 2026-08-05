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
class BSTIterator {

    void convertTreeToInorder(TreeNode* root,vector<int> &inorder){
        if(root == NULL) return;

        convertTreeToInorder(root->left,inorder);
        inorder.push_back(root->val);
        convertTreeToInorder(root->right,inorder);

    }
public:

    vector<int> inorder;
    int lastSeenPos = -1;

    BSTIterator(TreeNode* root) {
        convertTreeToInorder(root,inorder);
        lastSeenPos = 0;
    }
    
    int next() {
        return inorder[lastSeenPos++];
    }
    
    bool hasNext() {
        if(lastSeenPos >= inorder.size()) return false;
        return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */