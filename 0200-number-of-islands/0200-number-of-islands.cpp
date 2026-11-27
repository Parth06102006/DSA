class Solution {

  void dfs(int row, int column, vector<vector<int>> &visitedArr,
           vector<vector<char>> &grid) {

    int n = grid.size();
    int m = grid[0].size();

    visitedArr[row][column] = 1;

    int nrow = row + 1;
    int ncol = column;
    if (nrow >= 0 and nrow < n and ncol >= 0 and ncol < m and
        grid[nrow][ncol] == '1' and !visitedArr[nrow][ncol]) {
      dfs(nrow, ncol, visitedArr, grid);
    }

    nrow = row - 1;
    ncol = column;
    if (nrow >= 0 and nrow < n and ncol >= 0 and ncol < m and
        grid[nrow][ncol] == '1' and !visitedArr[nrow][ncol]) {
      dfs(nrow, ncol, visitedArr, grid);
    }

    nrow = row;
    ncol = column + 1;
    if (nrow >= 0 and nrow < n and ncol >= 0 and ncol < m and
        grid[nrow][ncol] == '1' and !visitedArr[nrow][ncol]) {
      dfs(nrow, ncol, visitedArr, grid);
    }

    nrow = row;
    ncol = column - 1;
    if (nrow >= 0 and nrow < n and ncol >= 0 and ncol < m and
        grid[nrow][ncol] == '1' and !visitedArr[nrow][ncol]) {
      dfs(nrow, ncol, visitedArr, grid);
    }
  }

public:
  int numIslands(vector<vector<char>> &grid) {
    int n = grid.size();
    int m = grid[0].size();
    int number_of_islands = 0;

    vector<vector<int>> visited(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (!visited[i][j] && grid[i][j] == '1') {
          number_of_islands++;
          dfs(i, j, visited, grid);
        }
      }
    }

    return number_of_islands;
  }
};
