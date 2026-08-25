class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int> exists(101,0);

        for(int i=0;i<nums.size();i++){
            if(nums[i]%k==0) exists[(nums[i]/k)] = 1 ;
        }

        int min_zero_index;

        for(int i=1;i<exists.size();i++){

            if(exists[i] == 0) {
                min_zero_index=i;
                break;
            }
            
        }

        return min_zero_index*k;
    }
};