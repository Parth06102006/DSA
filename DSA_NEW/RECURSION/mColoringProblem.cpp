#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    
    bool isSafe(int node,int color[],vector<vector<int>> graph,int v,int col){
        for(int k=0;k<v;k++){
            if(k!=node && graph[k][node] == 1 && color[k] == col){
                return false;
            }
        }
        return true;
    }
    
    bool solve(int node,int color[],int m,int v,vector<vector<int>> graph){
        if(node == v){
            return true;
        }
        
        for(int i=1;i<=m;i++){
            if(isSafe(node,color,graph,v,i)){
                color[node] = i;
                if (solve(node+1,color,m,v,graph)) return true;
                color[node]=0;
            }
        }
        
        
        return false;
    }
  
    bool graphColoring(int v, vector<vector<int>> &edges, int m) {
        vector<vector<int>> graph(v+1,vector<int> (v+1));;
        for(int i=0;i<edges.size();i++){
            graph[edges[i][0]][edges[i][1]] = 1;
            graph[edges[i][1]][edges[i][0]] = 1;
        }
        
        int color[v] = {0};
        if (solve(0,color,m,v,graph)) return true;
        return false;
    }
};