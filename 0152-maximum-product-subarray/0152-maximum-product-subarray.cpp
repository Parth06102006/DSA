class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int max_num = nums[0];
        int min_num = nums[0];
        int result = max_num;

        if(n == 1) return nums[0];

        for(int i=1;i<n;i++){
            int temp = max_num*nums[i];
            max_num = max(nums[i],max(min_num*nums[i],temp));
            min_num = min(nums[i],min(min_num*nums[i],temp));

            result = max(max_num,result);
        }

        return result;
    }
};