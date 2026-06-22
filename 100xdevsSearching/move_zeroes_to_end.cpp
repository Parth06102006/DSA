#include <bits/stdc++.h>
using namespace std;

void moveZeroesToEnd(vector<int> nums,int size)
{
    int j = -1;
    for(int k=0;k<size;k++) // change the condition here evaluate it and then change it
    {
        if(nums[k] == 0)
        {
            j=k;
            break;
        }
    }

    if(j==-1) return;

    for(int i=j+1;i<size;i++)
    {
        if(nums[i] != 0 )
        {
            swap(nums[i],nums[j]);
            j++;
        }
    }

    for(int i=0;i<size;i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int number_of_testcases;
    cin>>number_of_testcases;

    for(int i=0;i<number_of_testcases;i++)
    {
        int size;
        cin >> size;
        vector<int> nums(size);
        for(int j=0;j<size;j++)
        {
            cin>>nums[j];
        }
        moveZeroesToEnd(nums,size);
    }
}