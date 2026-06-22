#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void mazeCombinations(vector<string> &ans,string temp,vector<vector<int>>&maze,int i,int j){
    if(i<0 || j<0 || i>=maze.size() || j>= maze[0].size() || maze[i][j] == 0) return;
    if(j==maze[0].size()-1 && i == maze.size()-1){
        ans.push_back(temp);
        return;
    }


    maze[i][j] = 0;

    mazeCombinations(ans,temp + 'D',maze,i+1,j);
    mazeCombinations(ans,temp + 'L',maze,i,j-1);
    mazeCombinations(ans,temp + 'R',maze,i,j+1);
    mazeCombinations(ans,temp + 'U',maze,i-1,j);

    maze[i][j] = 1;

}

vector<string> ratInMaze(vector<vector<int>>& maze) {
        vector<string> ans;
        string temp;

        mazeCombinations(ans,temp,maze,0,0);

        return ans;

        
    }
};