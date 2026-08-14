struct Data {
    int straightPathSum = 0;
    int maxPathSum = INT_MIN;
};

class Solution {

    Data solve(TreeNode* root){
        if(root == NULL) return Data();

        Data leftAns = solve(root->left);
        Data rightAns = solve(root->right);

        Data ans;

        ans.straightPathSum = max({0,leftAns.straightPathSum,rightAns.straightPathSum}) + root->val;
        ans.maxPathSum = max({leftAns.maxPathSum,rightAns.maxPathSum,ans.straightPathSum,leftAns.straightPathSum+rightAns.straightPathSum+root->val});

        return ans;
    }

public:
    int maxPathSum(TreeNode* root) {
        if(root == NULL) return 0;
        if(root->left == NULL && root->right == NULL) return root->val;


        return solve(root).maxPathSum;
    }
};