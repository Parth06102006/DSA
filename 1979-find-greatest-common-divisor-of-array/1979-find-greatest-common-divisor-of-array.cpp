class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if (nums[nums.size()-1] % nums[0] == 0) return nums[0];

        int maxNum = INT_MIN;

        for(int i=nums[0];i>=2;i--){
            if((nums[0] % i == 0) && (nums[nums.size()-1] % i == 0)) return i;
        }

        return 1;
    }
};