class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {

        int n = nums.size();

        vector<int> NSE = findNSE(nums);
        vector<int> PSE = findPSEE(nums);
        vector<int> NGE = findNGE(nums);
        vector<int> PGE = findPGEE(nums);

        long long sum = 0;

        for(int i=0;i<n;i++){
            int left_small = i-PSE[i];
            int right_small = NSE[i]-i;
            int small = right_small * left_small;

            int left_great = i-PGE[i];
            int right_great = NGE[i]-i;
            int great = right_great * left_great;

            sum = sum + (1LL*(great-small)*nums[i]);
        }

        return sum;

    }

    vector<int> findNSE(vector<int> &nums){
        int n = nums.size();
        vector<int> nse(n,n);
        stack<int> st;

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && (nums[st.top()] >= nums[i])) st.pop();

            if(!st.empty()) nse[i] = st.top();

            st.push(i);
        }
        return nse;
    }

    vector<int> findPSEE(vector<int> &nums){
        int n = nums.size();
        vector<int> pse(n,-1);
        stack<int> st;

        for(int i=0;i<n;i++){
            while(!st.empty() && (nums[st.top()] > nums[i])) st.pop();

            if(!st.empty()) pse[i] = st.top();

            st.push(i);
        }

        return pse;
    }

    vector<int> findNGE(vector<int> &nums){
        int n = nums.size();
        vector<int> nge(n,n);
        stack<int> st;

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && (nums[st.top()] <= nums[i])) st.pop();

            if(!st.empty()) nge[i] = st.top();

            st.push(i);
        }
        return nge;
    }

    vector<int> findPGEE(vector<int> &nums){
        int n = nums.size();
        vector<int> pge(n,-1);
        stack<int> st;

        for(int i=0;i<n;i++){
            while(!st.empty() && (nums[st.top()] < nums[i])) st.pop();

            if(!st.empty()) pge[i] = st.top();

            st.push(i);
        }

        return pge;
    }

};