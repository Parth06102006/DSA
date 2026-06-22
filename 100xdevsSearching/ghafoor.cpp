#include <bits/stdc++.h>
using namespace std;

void printSpiral(vector<vector<int>> nums)
{
    
}   

int main()
{
    int row;
    int column;
    cin>>row>>column;

    vector<vector<int>> nums;
    for(int i=0;i<row;i++)
    {
        vector<int> num;
        for(int j=0;j<column;j++)
        {
            int digit;
            cin>>digit;
            num.push_back(digit);
        }
        nums.push_back(num);
    }
}