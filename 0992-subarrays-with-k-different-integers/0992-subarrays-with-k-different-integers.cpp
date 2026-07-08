class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return (subArrayWithLessThanEqualToKDistinctElements(nums,k)-subArrayWithLessThanEqualToKDistinctElements(nums,k-1));
    }

    int subArrayWithLessThanEqualToKDistinctElements(vector<int> &nums,int k){
        int left = 0,right = 0,count = 0;
        int n = nums.size();
        unordered_map<int,int> hash;

        while(right < n){
            hash[nums[right]]++;

            while(left<=right && hash.size() > k){
                hash[nums[left]]--;
                if(hash[nums[left]] == 0) hash.erase(nums[left]);
                left++;
            }

            count += (right-left+1);
            

            right++;

        }

        return count;
    }
};