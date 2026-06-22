// largest sum of the array with sum as zero which consists both postive and negative numbers

#include <bits/stdc++.h>
using namespace std;

int maxLen(int A[],int n)
{
    unordered_map<int,int> mpp;
    int maxi = 0;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum+=A[i];
        if(mpp.find(sum) != mpp.end())
        {
            maxi = max(i-mpp[sum],maxi);
        }
        else
        {
            mpp[sum] = i;
        }
    }
    return maxi;
}