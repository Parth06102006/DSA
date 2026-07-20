class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

        if (k==0) return grid;

        int n = grid.size();
        int m = grid[0].size();

        // cout<<m<<endl;

        // if(k==(n*m)) return grid;

        vector<vector<int>> nums(n,vector<int>(m,-1));

        for(int i=0;i<n;i++){
            // cout<<"Outer For Loop Execution "<<i+1<<endl;
            for(int j=0;j<m;j++){
                
                // cout<<"Inner For Loop Execution "<<j+1<<endl;
                int cnt = 0;
                int new_col = j;
                int new_row = i;
                int element = grid[i][j];

                // cout << "ELEMENT : "<<element<<endl;

                while(cnt<k){
                    // cout<<"While Loop Execution "<<cnt<<endl;


                    if(new_col == m-1){

                        // cout<<"HI"<<endl;
                        new_row = new_row+1;
                        if(new_row == n) new_row=0;
                        new_col = 0;
                        // cout<<"ROW : "<<new_row<<" AND "<<"COL : "<<new_col<<endl;
                    }else{
                        new_col++;
                    }
                    // cout<<"Where to place the element : "<<endl;
                    // cout<<"ROW : "<<new_row<<" AND "<<"COL : "<<new_col<<endl;
                    cnt++;

                    // cout<<"MATRIX FORMED : "<<endl;
                    // cout<<endl;
                    // for(int s=0;s<n;s++){
                    //     for(int t=0;t<m;t++ ){

                    //         cout<<nums[s][t]<<" ";
                    //     }
                    //     cout<<endl;
                    // }
                    // cout<<endl;
                }

                // cout<<"ROW : "<<new_row<<" AND "<<"COL : "<<new_col<<endl;
                nums[new_row][new_col] = element;
            }
        }

        return nums;
    }
};