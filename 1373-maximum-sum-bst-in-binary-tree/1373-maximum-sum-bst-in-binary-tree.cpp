struct Data {
    int sum = 0;
    int maxSum = 0;
    bool isBST = true;
    int maxVal = INT_MIN;
    int minVal = INT_MAX;
};

class Solution {

    Data solve(TreeNode* root){
        if(root == NULL) return Data();

        Data leftAns = solve(root->left);
        Data rightAns = solve(root->right);

        
        Data ans;

        if(!leftAns.isBST || !rightAns.isBST || !(leftAns.maxVal < root->val and rightAns.minVal > root->val)){

            ans.isBST = false;

            ans.maxSum = max(leftAns.maxSum,rightAns.maxSum);
            ans.minVal = min({leftAns.minVal,rightAns.minVal,root->val});
            ans.maxVal = max({leftAns.maxVal,rightAns.maxVal,root->val});

            return ans;
        }

        ans.sum = leftAns.sum + rightAns.sum + root->val;
        ans.maxSum = max({leftAns.maxSum,rightAns.maxSum,ans.sum});
        ans.minVal = min({leftAns.minVal,rightAns.minVal,root->val});
        ans.maxVal = max({leftAns.maxVal,rightAns.maxVal,root->val});

        return ans;

    }

public:
    int maxSumBST(TreeNode* root) {
        int finalAns = solve(root).maxSum;
        return (finalAns > 0) ? finalAns : 0;
    }
};