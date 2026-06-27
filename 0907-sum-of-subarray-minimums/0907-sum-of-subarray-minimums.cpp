class Solution {
public:
    const long long MOD = 1e9 + 7;
    int sumSubarrayMins(vector<int>& arr) {
        // BRUTE FORCE
        /* int n = arr.size();
        long long sum = 0;

        for(int i=0;i<n;i++){

            int min_num = arr[i];
            sum = (sum+min_num) % MOD;

            for(int j=i+1;j<n;j++){
                min_num = min(min_num,arr[j]);
                sum = (sum+min_num) % MOD;
            }

        }

        return sum; */

        // OPTIMAL APPROACH    
        int n = arr.size();
        vector<int> nse = findNSE(arr);
        vector<int> pse = findPSE(arr);
        long long sum = 0 ;

        for(int i=0;i<n;i++)
        {
            int left = i-pse[i];
            int right = nse[i] - i;
            sum = (sum + (1LL*left*right*arr[i]) %MOD ) % MOD;
        }

        return sum;
    }

    vector<int> findNSE(vector<int>& arr){
        int n = arr.size();
        vector<int> nse(n,n);
        stack<int> st;

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()] >= arr[i]) st.pop();

            if(!st.empty()) nse[i] = st.top();

            st.push(i);
        }
        return nse;
    }

    vector<int> findPSE(vector<int>& arr){
        int n = arr.size();
        vector<int> pse(n,-1);
        stack<int> st;

        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()] > arr[i]) st.pop();

            if(!st.empty()) pse[i] = st.top();

            st.push(i);
        }
        return pse;
    }

};