class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prod_prefix = 1;
        int prod_suffix = 1;

        vector<int> ans(n,1);

        for(int i=0;i<n;i++){
            ans[i] *= prod_prefix;
            prod_prefix*=nums[i];
        }

        for(int i=n-1;i>=0;i--){
            ans[i] *= prod_suffix;
            prod_suffix*= nums[i];
        }

        return ans;
    }
};