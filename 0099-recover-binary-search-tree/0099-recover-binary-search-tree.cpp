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
    void inOrder(TreeNode* root,vector<TreeNode*> &nodes,vector<int> &nums){
        if(root == NULL) return;

        inOrder(root->left,nodes,nums);
        nodes.push_back(root);
        nums.push_back(root->val);
        inOrder(root->right,nodes,nums);
    }
    const int NUMBER_OF_TIMES_TO_SWAP=2;
public:
    void recoverTree(TreeNode* root) {
        vector<TreeNode*> nodes;
        vector<int> nums;

        inOrder(root,nodes,nums);

        sort(nums.begin(),nums.end());
        
        int times_swapped = 0;

        for(int i=0;i<nums.size();i++){

            if(NUMBER_OF_TIMES_TO_SWAP == times_swapped) break;

            if(nodes[i]->val != nums[i]){
                nodes[i]->val = nums[i];
                times_swapped++;
            }
        }

    }
};