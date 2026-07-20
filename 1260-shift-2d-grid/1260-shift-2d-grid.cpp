class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {


        int n = grid.size();
        int m = grid[0].size();

        k %= (n*m);

        if (k==0) return grid;

        vector<vector<int>> nums(n,vector<int>(m,-1));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                int new_row = i + (j+k)/m;
                int new_col = (j+k)%m;

                new_row %= n;

                nums[new_row][new_col] = grid[i][j];
            }
        }

        return nums;
    }
};