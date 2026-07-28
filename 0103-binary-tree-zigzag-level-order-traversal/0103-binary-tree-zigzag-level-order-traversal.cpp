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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        if(root == NULL) return {};

        queue<TreeNode*> q;

        q.push(root);

        vector<vector<int>> ans;

        int level = 0;

        while(!q.empty()){
            
            vector<int> row;
            int size = q.size();
            for(int i=0;i<size;i++){

                TreeNode* node = q.front();
                row.push_back(node->val);

                q.pop();


                if(node->left != NULL) q.push(node->left);
                if(node->right != NULL) q.push(node->right);
            }
            if(level % 2 == 1) reverse(row.begin(),row.end());
            ans.push_back(row);
            level++;
        }

        return ans;
    }
};