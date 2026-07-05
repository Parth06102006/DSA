class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int right = 0;
        int n = nums.size();
        unordered_map<int,int> mpp;

        while(right < n){
            int val = nums[right];

            if(mpp.contains(val) == true){
                if(abs(mpp[val] - right) <= k) return true;
            }

            mpp[val] = right;

            right++;
        }

        return false;
    }
};