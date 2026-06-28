class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> nse = findNSE(heights);
        vector<int> pse = findPSE(heights);

        long long max_height = INT_MIN;

        for(int i=0;i<n;i++){
            int left = i - pse[i];
            int right = nse[i] - i;

            int width = left+right-1;

            max_height = max(max_height,(1LL*width*heights[i]));
        }

        return max_height;

    }

    vector<int> findNSE(vector<int> & nums){
        int n = nums.size();
        stack<int> st;
        vector<int> nse(n,n);

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && (nums[st.top()] >= nums[i])) st.pop();

            if(!st.empty()) nse[i] = st.top();

            st.push(i);
        }

        return nse;

    }

    vector<int> findPSE(vector<int> & nums){
        int n = nums.size();
        stack<int> st;
        vector<int> pse(n,-1);

        for(int i=0;i<n;i++){
            while(!st.empty() && (nums[st.top()] > nums[i])) st.pop();

            if(!st.empty()) pse[i] = st.top();

            st.push(i);
        }

        return pse;

    }

};