class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int> memoization(nums.size(),-1);
        return willJump(nums,memoization,0);
    }

    int willJump(vector<int> &nums,vector<int> &memoization,int index){

        if(index >= nums.size()-1) return 0;

        if(memoization[index] != -1){
            return memoization[index];
        }

        int ans = INT_MAX;
        int max_steps = nums[index];

        for(int i=1;i<=max_steps;i++){
            if(index+i < nums.size()) {
                int jumps = willJump(nums,memoization,index+i);

                if(jumps != INT_MAX){
                    ans = min(ans,jumps+1);
                }
            }
        }

        return memoization[index] = ans;

    }
};