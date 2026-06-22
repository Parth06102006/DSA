// i am given a target and then i could perform xor of the elements where i need to use xor to find the number of subarray elements that give the sum as k
#include <bits/stdc++.h>
using namespace std;

int number_of_subaarays(vector<int>nums,int k)
{
    int n=nums.size();
    unordered_map<int,int> mpp;
    int count = 0;
    int prefixXOR = 0;
    mpp[prefixXOR] = 1;
    for(int i=0;i<n;i++)
    {
        prefixXOR ^= nums[i];
        int x = prefixXOR ^ k;
        if(mpp.find(x) != mpp.end())
        {
            count += mpp[x];
        }
        mpp[prefixXOR]++;
    }
}