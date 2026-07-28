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
    int findBottomLeftValue(TreeNode* root) {
        queue<tuple<TreeNode* , int , int>> q;


        int depth = INT_MIN;
        int start = INT_MAX;
        int end = INT_MIN;

        unordered_map<int,vector<int>> mpp;

        q.push({root,0,0});

        while(!q.empty()){
            auto [node,pos,level] = q.front();
            q.pop();

            depth = max(depth,level);

            if(node->left != NULL) q.push({node->left,pos-1,level+1});
            if(node->right != NULL) q.push({node->right,pos+1,level+1});

            mpp[level].push_back(node->val);
        }

        return mpp[depth][0];


    }
};