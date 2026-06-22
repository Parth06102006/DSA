#include <bits/stdc++.h>
using namespace std;

// brute force solution
void setZeroes(vector<vector<int>> matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    vector<vector<int>> records;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j] == 0)
            {
                records.push_back({i,j});
            }
        }
    }

    for(int k=0;k<records.size();k++)
    {
        int row = records[k][0];
        int column = records[k][1];

        for(int j=0;j<n;j++)
        {
            matrix[row][j] = 0;
        }
        for(int j=0;j<n;j++)
        {
            matrix[j][column] = 0;
        }
    }

    for(int i=0;i<m;i++)
    {
        vector<int> rec;
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

void setZeroesBetter(vector<vector<int>> matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();

    vector<int> row(m,0);
    vector<int> col(n,0);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j]==0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(row[i] == 1 || col[j] == 1)
            {
                matrix[i][j] = 0;
            }
        }
    }

    for(int i=0;i<m;i++)
    {
        vector<int> rec;
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

void setZeroesBest(vector<vector<int>> matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    // Here we need to use the first row and the column to mark the values as zeroes or not

    int col00 = 1;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j]==0)
            {
                matrix[i][0] = 0;

                if(j!=0)
                {
                    matrix[0][j] = 0;
                }
                else
                {
                    col00 = 0;
                }
            }
        }
    }

    for(int i=1;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(matrix[0][i]==0 || matrix[0][j]==0)
            {
                matrix[i][j] = 0;
            }
        }
    }

    if(matrix[0][0] == 0)
    {
        for(int j=0;j<n;j++) matrix[0][j] =  0;
    }

    if(col00 == 0)
    {
        for(int i=0;i<m;i++) matrix[i][0] =  0;
    }

        for(int i=0;i<m;i++)
    {
        vector<int> rec;
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main()
{
    int n,m;
    cin>>n>>m;

    vector<vector<int>> matrix;

    for(int i=0;i<m;i++)
    {
        vector<int> rec;
        for(int j=0;j<n;j++)
        {
            int number;
            cin>>number;
            rec.push_back(number);
        }
        matrix.push_back(rec);
    }
    
    setZeroesBest(matrix);
}

