class Solution {
public:
    int longestSubsequence(vector<int>& nums) {

        int xor_result = 0;
        bool isZero = true;
        
        for(int i=0;i<nums.size();i++){
            xor_result ^= nums[i];
            if(nums[i] != 0) isZero = false;
        }

        if(xor_result == 0){
            if(isZero) return 0;
            return nums.size()-1;
        }

        return nums.size();
    }
};