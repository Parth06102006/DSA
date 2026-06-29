class Solution {
public:
    bool check(vector<int>& nums) {

        // BRUTE FORCE
        /* int n = nums.size();
        int i = 0;
        int j = n-1;
        int temp = -1;

        while((i<n)){
            if(i==0){
                temp = nums[0];
            }else{
                if(temp > nums[i]) break;
                else temp = nums[i];
            }
            i++;
        }

        if(i==n) return true;

        cout<<i<<endl;

        while(j>=0){
            if(j==n-1){
                temp = nums[n-1];
            }else{
                if(temp < nums[j]) break;
                else temp = nums[j];
            }
            j--;
        }

        if(j==-1) return false;

        cout<<j<<endl;

        if(j+1 != i) return false;

        while(j >= 0){
            if(nums[n-1] > nums[j]){
                return false;
            }
            j--;
        }

        return true; */

        int count = 0;
        int n = nums.size();

        for(int i=0;i<n;i++){
            if(nums[i] > nums[(i+1)%n]){
                count++;
            }
        }

        if(count >= 2) return false;
        return true;

    }
};