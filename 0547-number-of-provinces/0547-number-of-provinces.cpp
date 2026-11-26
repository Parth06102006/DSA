class Solution {

  void dfs(int i, vector<vector<int>> &adjList, vector<int> &visitedArr) {
    visitedArr[i] = 1;
    for (auto it : adjList[i]) {
      if (!visitedArr[it]) {
        dfs(it, adjList, visitedArr);
      }
    }
  }

public:
  int findCircleNum(vector<vector<int>> &isConnected) {
    int count_provinces = 0;
    int n = isConnected.size();

    vector<vector<int>> adjList(n);

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < i; j++) {
        if (isConnected[i][j] == 1) {
          adjList[i].push_back(j);
          adjList[j].push_back(i);
        }
      }
    }

    vector<int> visitedArr(n, 0);

    for (int i = 0; i < n; i++) {
      if (!visitedArr[i]) {
        count_provinces++;
        dfs(i, adjList, visitedArr);
      }
    }

    return count_provinces;
  }
};
