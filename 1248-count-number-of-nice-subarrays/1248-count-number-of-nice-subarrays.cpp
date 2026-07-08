class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return numberOfSubarraysLessThanEqualToK(nums,k) - numberOfSubarraysLessThanEqualToK(nums,k-1);
    }

    int checkOdd(int num){
        return (num % 2 == 1) ? 1 : 0;
    }

    int numberOfSubarraysLessThanEqualToK(vector<int> nums,int k){
        if(k<0) return 0;
        int left=0,right=0;
        int sum = 0;
        int count = 0;

        while(right < nums.size()){
            sum += checkOdd(nums[right]);

            while(sum > k){
                sum -= checkOdd(nums[left]);
                left++;
            }

            count += ( right - left + 1 );
            right++;
        }
        return count;
    }
};