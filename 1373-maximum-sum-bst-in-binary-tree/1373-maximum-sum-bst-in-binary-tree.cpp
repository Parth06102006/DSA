struct Data {
    int sum = 0;
    bool isBST = true;
    int maxVal = INT_MIN;
    int minVal = INT_MAX;
};

class Solution {

    int maxSum = 0;

    Data solve(TreeNode* root){
        if(root == NULL) return Data();

        Data leftAns = solve(root->left);
        Data rightAns = solve(root->right);

        
        Data ans;

        if(!leftAns.isBST || !rightAns.isBST || !(leftAns.maxVal < root->val and rightAns.minVal > root->val)){

            ans.isBST = false;

            maxSum = max({maxSum,leftAns.sum,rightAns.sum});

            ans.minVal = min({leftAns.minVal,rightAns.minVal,root->val});
            ans.maxVal = max({leftAns.maxVal,rightAns.maxVal,root->val});

            return ans;
        }

        ans.sum = leftAns.sum + rightAns.sum + root->val;
        maxSum = max(maxSum,ans.sum);
        ans.minVal = min({leftAns.minVal,rightAns.minVal,root->val});
        ans.maxVal = max({leftAns.maxVal,rightAns.maxVal,root->val});

        return ans;

    }

public:
    int maxSumBST(TreeNode* root) {
        solve(root).sum;
        return (maxSum > 0) ? maxSum : 0;
    }
};