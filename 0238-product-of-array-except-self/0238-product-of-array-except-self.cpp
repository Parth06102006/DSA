class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prod_prefix = 1;
        int prod_suffix = 1;

        vector<int> prefix(n);
        vector<int> suffix(n);

        for(int i=0;i<n;i++){
            prefix[i] = prod_prefix;
            prod_prefix*=nums[i];
        }

        for(int i=n-1;i>=0;i--){
            suffix[i] = prod_suffix;
            prod_suffix*= nums[i];
        }

        for(int i=0;i<n;i++){
            nums[i] = prefix[i]*suffix[i];
        }

        return nums;
    }
};