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

    void convertToInorder(vector<int> &nums,TreeNode* root){
        if(root == NULL) return ;

        convertToInorder(nums,root->left);
        nums.push_back(root->val);
        convertToInorder(nums,root->right);
    }


public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> nums;
        convertToInorder(nums,root);

        int i = 0;
        int j = nums.size()-1;

        while(i<j){
            int sum = nums[i] + nums[j];

            if(sum > k){
                j--;
            }else if(sum < k){
                i++;
            }else{
                return true;
            }
        }

        return false;
        
    }

};