struct Data {
    int leftSum = 0;
    int rightSum = 0;
    int maxSum = INT_MIN;
};

class Solution {

    Data solve(TreeNode* root){
        if(root == NULL) return Data();

        Data leftAns = solve(root->left);
        Data rightAns = solve(root->right);

        Data ans;

        int left = max({0,leftAns.leftSum,leftAns.rightSum});
        int right = max({0,rightAns.leftSum,rightAns.rightSum});

        int sum = left + right + root->val;
        int leftSum = left + root->val;
        int rightSum = right + root->val;

        ans.leftSum = leftSum;
        ans.rightSum = rightSum;
        
        ans.maxSum = max<long long>({root->val,leftSum,rightSum,sum,leftAns.maxSum,rightAns.maxSum});

        return ans;
    }

public:
    int maxPathSum(TreeNode* root) {
        if(root == NULL) return 0;
        if(root->left == NULL && root->right == NULL) return root->val;


        return solve(root).maxSum;
    }
};