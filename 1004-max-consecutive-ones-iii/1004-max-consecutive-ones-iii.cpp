class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        if (k >= nums.size()) return nums.size();

        int firstZero = -1;
        int left = 0;
        int right = 0;
        int n = nums.size();
        int maxLen = 0;
        int cnt = 0;

        for(int i=left;i<n;i++){
            if(nums[i] == 1) firstZero++;
            else break;
        }

        if(firstZero == n) return nums.size();

        firstZero++; // Move to the position where 0 appears which is next to the posistion

        while(right<n){
            if(nums[right] == 1) maxLen = max(maxLen,right-left+1);
            else{
                if(cnt < k){
                    cnt++;
                }else{
                    left = firstZero+1;
                    for(int i=left;i<n;i++){
                        if (nums[i] == 0){
                            firstZero = i;
                            break;
                        }
                    
                    }

                }
                maxLen = max(maxLen,right-left+1);
            }

            right++;
        }

        return maxLen;
    }
};