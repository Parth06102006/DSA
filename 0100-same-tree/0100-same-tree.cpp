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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if(p == nullptr && q==nullptr) return true;
        else{
            if(p==nullptr) return false;
            if(q==nullptr) return false;
        }

        queue <pair<TreeNode*,TreeNode*>> check_queue;
        check_queue.push({p,q});

        while(!check_queue.empty()){
            TreeNode* tree_one = check_queue.front().first;
            TreeNode* tree_second = check_queue.front().second;
            check_queue.pop();

            if(tree_one->val != tree_second->val) return false;

            if(tree_one->left != nullptr && tree_second->left != nullptr) check_queue.push({tree_one->left,tree_second->left});
            else if((tree_one->left == nullptr && tree_second->left != nullptr) || (tree_one->left != nullptr && tree_second->left == nullptr )) return false;

            if(tree_one->right != nullptr && tree_second->right != nullptr) check_queue.push({tree_one->right,tree_second->right});
            else if((tree_one->right == nullptr && tree_second->right != nullptr) || (tree_one->right != nullptr && tree_second->right == nullptr )) return false;
        }

        return true;
    }
};