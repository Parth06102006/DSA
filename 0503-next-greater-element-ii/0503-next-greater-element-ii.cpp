class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {


        // BRUTE FORCE SOLUTION
        /* vector<int> ans(nums.size(),-1);
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
                if(new_curr_element > curr_element){ans[i] = new_curr_element;break;}
                j++;
            }

        }

        return ans; */


        // OPTIMAL APPROACH

        int n = nums.size();
        vector<int> ans(n,-1);
        stack<int> st;

        for(int i=2*n-1;i>=0;i--){

            while(!st.empty() && (st.top() <= nums[i%n])) st.pop();

            // When the elements are less than the virtual index
            if(i<n){
                ans[i] = st.empty() ? -1 : st.top();
            }

            st.push(nums[i%n]);
        }
        
        return ans;

    }
};