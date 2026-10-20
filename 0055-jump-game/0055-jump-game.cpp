class Solution {
public:
    bool canJump(vector<int>& nums) {
        vector<int> memoization(nums.size(),-1);
        return willJump(nums,nums[0],0,memoization);
    }

    bool willJump(vector<int> &nums,int max_steps,int index,vector<int> &memoization){
        if (index == nums.size() - 1) return true;
        if(index > nums.size()-1) return false;

        bool val = false;

        if(memoization[index] != -1) return memoization[index];

        for(int i=1;i<=max_steps;i++){
            index+=i;

            if(index<nums.size()){
                val = willJump(nums,nums[index],index,memoization);
                memoization[index]=val;
                if(val) return true;
                else index-=i;
            }
        }

        return val;
    }
};