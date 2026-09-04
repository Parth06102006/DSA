class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        // BRUTE FORCE hai bhaijaan

        // size
        /* int nums_size = nums.size();

        int ans = -1;

        for(int i = 0 ; i < nums_size ; i++){
            int max_n = *max_element(nums.begin(),nums.begin()+i);
            int min_n = *min_element(nums.begin()+i,nums.end());

            if(max_n - min_n <= k) {
                ans = i;
                break;
            }

        }

        return ans; */

        int nums_size = nums.size();

        if(nums_size == 1) return 0;

        // PrefixMax
        vector<int> prefixMax(nums_size);

        prefixMax[0] = nums[0];

        for(int i=1;i<nums_size;i++){
            prefixMax[i] = max(prefixMax[i-1],nums[i]);
        }
        
        // SuffixMin
        vector<int> suffixMin(nums_size);

        suffixMin[nums_size-1] = nums[nums_size-1];

        for(int i=nums_size-2;i>=0;i--){
            suffixMin[i] = min(suffixMin[i+1],nums[i]);
        }

        // Check the difference is less than equal to k
        for(int i=0;i<nums_size;i++){
            if(prefixMax[i] - suffixMin[i] <= k) return i;
        }

        return -1;

    }
};