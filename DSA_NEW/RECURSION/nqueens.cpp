#include <bits/stdc++.h>
using namespace std;

// DO NOT REFER TO THIS IT IS A WRONG SOLUTON

void combinations(vector<vector<string>> &ans,vector<string> temp,vector<vector<char>> &board,int n,int m){
    if(n==m) { 
        ans.push_back(temp);
        return;
    }

    string temp_arr = "";
    bool isFound = false;
    for(int i=0;i<board.size();i++){
        temp_arr = "";
        int j=0;
        for(;j<board[0].size();j++){
            if(board[i][j] != '#'){
                isFound = true;
                temp.push_back("Q");
            }else{
                temp.push_back(".");
            }
        }
        if(isFound){
            if (board[0].size() - j != 0){
                for(int k = 0;k<board[0].size()-j;k++){
                    temp.push_back(".");
                }
            }

            for(int k=0;k<board[0].size();k++){
                board[i][k] = '#';
            }
            for(int k=0;k<board.size();k++){
                board[k][j-1] = '#';
            }
            int temp_i = i;
            int temp_j = j;
            int i = i+1;
            while(i>0 && j>0 && i<board.size() && j<board[0].size()){
                board[i][j] = '#';
                i++;j++;
            }
            i=temp_i-1;
            j = temp_j - 2;
            while(i>=0 && j>=0 && i<board.size() && j<board[0].size()){
                board[i][j] = '#';
                i--;j--;
            }

        }

    }

    temp.push_back(temp_arr);
    m++;

}

vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> temp;
        int m = 0;
        vector<vector<char>> board(n,vector<char>(n)) ; 

        combinations(ans,temp,board,n,m);
        return ans;
}

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int a, b;
        cin >> a >> b;
        
        cout << "Test Case: a = " << a << ", b = " << b << endl;
        vector<vector<string>> result = solveNQueens(a);
        cout << "Result size: " << result.size() << endl;
        cout << endl;
    }
    
    return 0;
}
