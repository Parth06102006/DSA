class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {

        // BRUTE FORCE
        /* sort(nums.begin(),nums.end());
        int n = nums.size();
        int maxFreq = 0;



        for(int i = n-1;i>=0;i--){
            int value = nums[i];
            int freq = 1;
            int k_cpy = k;
            for(int j = i-1;j>=0;j--){
                int sub = value - nums[j];
                k_cpy -= sub;
                if(k_cpy < 0) break;
                else freq++;
            }

            maxFreq = max(maxFreq,freq);

        }

        return maxFreq; */ 

        int left = 0;
        long long sum = 0;
        int ans = 0;

        sort(nums.begin(),nums.end());

        for(int right = 0; right < nums.size() ; right++){
            sum += nums[right];

            while((long long)nums[right] * (right-left+1) - sum > k){
                sum -= nums[left];
                left++;
            }
            ans = max(ans,(right-left+1));
        }

        return ans;

    }
};