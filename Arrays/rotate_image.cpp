#include <bits/stdc++.h>
using namespace std;
// if i am given a n*n matrix so i need to rotate it by 90degress
/* 
1 2 3 4                 13 9 5 1
5 6 7 8           =>   14 10 6 2
9 10 11 12             15 11 7 3
13 14 15 16            16 12 8 4 
*/

void brute_force(vector<vector<int>> nums)
{
    vector<vector<int>> nums_2;
    int n = nums.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n-1;j++)
        {
            nums_2[j][n-i-1] = nums[i][j];
        }
    }
}
// here the time complexity is O(n^2) and the space complexity is O(n^2)


//for the optimal solution 
// we first transpose the given matrix and then after transposing the matrix we perform reversal of every row in the given matrix
void optimal_solution(vector<vector<int>> nums)
{
    int n = nums.size();
    for(int i=0;i<=n-2;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            swap(nums[i][j],nums[j][i]);
        }
    }
    for(int i=0;i<n-2;i++)
    {
        reverse(nums[i].begin(),nums[i].end());
    }
}

int main()
{
}