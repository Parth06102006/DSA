// here the problem states that if there is a o in a n x m matrix then turn the row and the column where there is 0 every element as 0 
#include <bits/stdc++.h>
using namespace std;

//here we first traverse every row and column and make every element as -1 for 0 in that row or column and after marking every element we then mark the -1 as 0 like we convert them basically 
void set_matrix_zeroes_brute(vector<vector<int>>& nums,int n,int m)
{
    // here n is the number of rows in the vector or in the array
    // here m is the number of columns in the vector or in the array
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(nums[i][j] == 0)
            {
                markRow(nums,i,m);
                markColumn(nums,j,n);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(nums[i][j] == -1)
            {
                nums[i][j] = 0;
            }
        }
    }
}

void markRow(vector<vector<int>> nums,int i,int m)
{
    for(int j=0;j<m;j++)
    {
        if(nums[i][j] != 0)
        {
            nums[i][j] = -1;
        }
    }
}

void markColumn(vector<vector<int>> nums,int j,int n)
{
    for(int i=0;i<n;i++)
    {
        if(nums[i][j] != 0)
        {
            nums[i][j] = -1;
        }
    }
}

//overall time complexity here is O(N^3)

// fro better solution you can mark the rows and columns where you want to add the zeroes 
// first i would mark every row and column as 0 and for every row i would check if there is zero then we mark the columns and rows and then move forward
// and after that if the row or column are unmarked then do nothing ig any one of them is marked wither row or column for a cell then mark it as 0
void set_matrix_zeroes_better(vector<vector<int>> nums,int n,int m)
{
    vector<int> row(n,0);
    vector<int> column(m,0);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(nums[i][j]==0)
            {
                row[i] = 1;
                column[j] = 1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(row[i] || column[j])
            {
                nums[i][j]=0;
            }
        }
    }
}

// here the time complexity is O(2*m*n)
// here the space complexity is O(m)+O(n)

//here for the optimal solution the time complexity would be the same as better solution but our main focus needs to be to reduce the space complexity so hence we need to reduce the space complexity
// hence instead of making rows and columns arrays we mark it in the row and column only the first row and frist ciolumn and o avoid the element at 0,0 position to collide since both would be changed then that same element would also be changes for both again and again hence instead of that take another variable and mark in that row the element of the column the value here atleast we are not using up O(n)+O(m) as space complexity like we are not utilizing this much space also we need to avoid the use of first row and first column as they are makred we would touch them later after we have finished every other row besides that afterwards what we can do is that first we solve the dependent portion of the first row since it is dependent on the first column and then we change the first column

void set_matrix_zeroes_better(vector<vector<int>> nums,int n,int m)
{
    int col0 = 1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(nums[i][j]==0)
            {
                nums[i][0] = 0;
                if(j!=0)
                {
                    nums[0][j] = 0;
                }
                else
                {
                    col0 = 0;
                }
            }
            else
            {

            }
        }
    }
    // here we are not touching the hashed arrays so we are okay
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(nums[i][j]!=0)
            {
                if(nums[0][j] == 0|| nums[i][0] == 0)
                {
                    nums[i][j] = 0;
                }
            }
        }
    }

    if(nums[0][0] == 0)
    {
        for(int j=0;j<m;j++) nums[0][j]=0;
    }

    if(col0 == 0)
    {
        for(int i=0;i<n;i++) nums[i][0]=0;
    }
}


int main(){}