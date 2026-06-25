class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        // BRUTE FORCE SOLUTION
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            int cnt = 0;
            for(int j=i;j<nums.size();j++){
                if(target == nums[j]) cnt++;
                if(cnt > (j-i+1)/2) ans+=1;
            }
        }

        return ans;
    }
};