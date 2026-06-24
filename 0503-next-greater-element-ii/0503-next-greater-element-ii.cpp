class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        stack<int> st;
        vector<int> ans(nums.size(),-1);
        int n = nums.size();

        for(int i=n-1;i>=0;i--){
            int curr_element = nums[i];
            int j = 0;

            int haveFound = 0;

            int cpy_i = i;
            while(cpy_i<n){
                int new_curr_element = nums[cpy_i];
                if(new_curr_element > curr_element){haveFound=1;ans[i] = new_curr_element;break;}
                cpy_i++;
            }

            while(!haveFound && (j<i)){
                int new_curr_element = nums[j];
                if(new_curr_element > curr_element){haveFound=1;ans[i] = new_curr_element;break;}
                j++;
            }

            if(!haveFound) ans[i] = -1;

        }

        return ans;

    }
};