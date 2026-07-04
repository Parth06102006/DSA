class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return (numberOfSubSrraysSumLessThanEqualToGoal(nums,goal) - numberOfSubSrraysSumLessThanEqualToGoal(nums,goal-1));
    }

    int numberOfSubSrraysSumLessThanEqualToGoal(vector<int> &nums,int goal){
        int left = 0,right = 0,n=nums.size();
        long long sum = 0;
        int cnt = 0;

        while(right<n){
            sum += nums[right];
            if (goal < 0)
                return 0;

            while (sum > goal){
                sum -= nums[left];
                left++;
            }
            
            cnt+= (right-left+1);

            right++;
        }
        return cnt;
    }
};