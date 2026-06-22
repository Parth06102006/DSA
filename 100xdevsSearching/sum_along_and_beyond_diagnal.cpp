#include <bits/stdc++.h>
using namespace std;

void findData(vector<vector<int>> nums)
{
    long long sumOfDiagonals = 0;
    long long totalSum = 0;
    int size = nums.size();

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            totalSum += nums[i][j];
            if((i==j) || i + j == size-1)
            {
                sumOfDiagonals += nums[i][j];
            }
        }
    }

    cout<<sumOfDiagonals<<" "<<(totalSum - sumOfDiagonals)<<endl;
}

int main()
{
    int numberOfElements;
    cin>>numberOfElements;

    vector<vector<int>> nums;

    for(int i=0;i<numberOfElements;i++)
    {
        vector<int> entry;
        for(int j=0;j<numberOfElements;j++)
        {
            int digit;
            cin>>digit;
            entry.push_back(digit);
        }
        nums.push_back(entry);
    }

    findData(nums);
}