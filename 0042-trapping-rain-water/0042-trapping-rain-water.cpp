class Solution {
public:
    int trap(vector<int>& height) {

        // BRUTE FORCE
        /* int rows = *max_element(height.begin(),height.end());
        int cols = height.size();

        vector<vector<int>> grid(rows,vector<int>(cols,1));

        for(int i=0;i<height.size();i++){
            int value = height[i];
            for(int j=rows-1;j>=0;j--){
                if (value){
                    grid[j][i] = 0;
                    value--;
                }
            }
        }

        for(int i=0;i<rows;i++){
            vector<int> temp = grid[i];
            int target = 0;
            int count_0 = count(temp.begin(),temp.end(),target);

            if(count_0 == 1){
                for(int j=0;j<cols;j++){
                    grid[i][j] = 0;
                }
            }
        }

        int count = 0;

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j] == 1) count++;
            }
        }

        return count; */

        stack<int> st;
        int max_num = INT_MIN;
        int count = 0;

        for(int i=0;i<height.size();i++){

            if(height[i] >= max_num){
                int temp_cnt = 0;
                while(!st.empty() && (st.top() != max_num)){
                    temp_cnt += max_num - st.top();
                    st.pop();
                }
                count += temp_cnt;
                st.push(height[i]);
                max_num = height[i];
            }

            st.push(height[i]);
        }

        if(st.size() > 1){
            int temp_cnt = 0;
            int prev_elem = st.top();
            while(!st.empty() && (st.top() != max_num) ){
                st.pop();
                if(st.top() < prev_elem) {
                    temp_cnt += prev_elem-st.top();
                }else{
                    prev_elem = st.top();
                }
            }
            count += temp_cnt;
        }

        return count;

    }
};