class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<int> rectangles(matrix[0].size(),0);

        int ans = INT_MIN;

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                // if(matrix[i][j] == '1') rectangles[j]++;
                if(matrix[i][j] == '1') rectangles[j]++;
                else{
                    rectangles[j] = 0;
                }
            }
            ans = max(ans,largestRectangle(rectangles));
        }

        return ans;
    }
    

    int largestRectangle(vector<int> &rectangles){
        int n = rectangles.size();
        vector<int> pse = findPSEE(rectangles);
        vector<int> nse = findNSE(rectangles);
        int max_rect = INT_MIN;

        for(int i=0;i<n;i++){
            int left = i-pse[i];
            int right = nse[i] - i;

            int width = left+right-1;

            max_rect = max(max_rect,width*rectangles[i]);
        }

        return max_rect;
    }

    vector<int> findNSE(vector<int>& nums){
        int n =  nums.size();
        stack<int> st;
        vector<int> nse(n,n);

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && (nums[st.top()] >= nums[i])) st.pop();

            if(!st.empty()) nse[i] = st.top();

            st.push(i);
        }

        return nse;

    }

    vector<int> findPSEE(vector<int>& nums){
        int n =  nums.size();
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