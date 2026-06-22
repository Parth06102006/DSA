#include <bits/stdc++.h>
using namespace std;

// THE BELOW SOLUTION IS WRONG DONT REFER TO IT

    bool checkExist(int i,int j,int prev_i,int prev_j,int char_index,vector<vector<char>>& board,string word){
    if (char_index > word.length()) return false;

    for(;j<board[0].size();j++){
        if(board[i][j] == word[char_index]){
            cout<<word[char_index]<<endl;
            if (i==0){
                bool doesExist = checkExist(i+1,j,i,j,char_index+1,board,word);
                if (doesExist){
                    return true;
                }
                doesExist = checkExist(i,j+1,i,j,char_index+1,board,word);

                if (doesExist) return true;
                else return false;
            }
            else if(i == board.size()-1){
                bool doesExist = checkExist(i-1,j,i,j,char_index+1,board,word);
                if (doesExist){
                    return true;
                }
                doesExist = checkExist(i,j+1,i,j,char_index+1,board,word);

                if (doesExist) return true;
                else return false;
            }
            else if(j==0){
                bool doesExist = false;

                if(prev_i != i+1 || prev_j != j){
                    doesExist = checkExist(i+1,j,i,j,char_index+1,board,word);
                    if (doesExist){
                        return true;
                    }
                }

                if(prev_i != i-1 || prev_j != j)
                {
                    doesExist = checkExist(i-1,j,i,j,char_index+1,board,word);
                    if (doesExist) return true;
                    
                }

                if(prev_i != i || prev_j != j+1){
                    doesExist = checkExist(i,j+1,i,j,char_index+1,board,word);
                    if (doesExist) return true;
                }
                
                
                return doesExist;
            }
            else if(j==board[0].size()-1){
                bool doesExist = false;

                if(prev_i != i+1 || prev_j != j){
                    doesExist = checkExist(i+1,j,i,j,char_index+1,board,word);
                    if (doesExist){
                        return true;
                    }
                }

                if(prev_i != i-1 || prev_j != j)
                {
                    doesExist = checkExist(i-1,j,i,j,char_index+1,board,word);
                    if (doesExist) return true;
                    
                }

                if(prev_i != i || prev_j != j-1){
                    doesExist = checkExist(i,j-1,i,j,char_index+1,board,word);
                    if (doesExist) return true;
                }
                
                
                return doesExist;
            }
            else {
                bool doesExist = false;

                if(prev_i != i+1 || prev_j != j){
                    doesExist = checkExist(i+1,j,i,j,char_index+1,board,word);
                    if (doesExist){
                        return true;
                    }
                }

                if(prev_i != i-1 || prev_j != j)
                {
                    doesExist = checkExist(i-1,j,i,j,char_index+1,board,word);
                    if (doesExist) return true;
                    
                }

                if(prev_i != i || prev_j != j+1){
                    doesExist = checkExist(i,j+1,i,j,char_index+1,board,word);
                    if (doesExist) return true;
                }
                
                if(prev_i != i || prev_j != j+1){
                    doesExist = checkExist(i,j+1,i,j,char_index+1,board,word);
                    if (doesExist) return true;
                }
                
                return doesExist;
                
                doesExist = checkExist(i,j-1,i,j,char_index+1,board,word);

                if (doesExist) return true;
                else return false;
            }
        }
    }

    return false;
}

bool exist(vector<vector<char>>& board, string word) {
    return checkExist(0,0,0,board,word);
}