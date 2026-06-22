#include <bits/stdc++.h>
using namespace std;


// Brute Force Solution
vector<int> twoSum(vector<int>& arr, int target)
{
    int size = arr.size();
    for(int i = 0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j] == target)
            {
                return {i,j};
            }
        }
    }

    return {};
  
}

// Better Solution 
vector<int> twoSumBest(vector<int>& arr, int target)
{
    int size = arr.size();
    unordered_map<int,int> mpp;
    for(int i=0;i<size;i++)
    {
        int b = target - arr[i];
        if(mpp.find(b) != mpp.end())
        {
            return {mpp[b],i};
        }
        mpp[arr[i]] = i;
    }
    return {};
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums;
    for(int i=0;i<n;i++)
    {
        int number;
        cin >> number;
        nums.push_back(number);
    }

    int target;
    cin>>target;
    vector<int> result = twoSumBest(nums,target);
    for(int i=0;i<2;i++)
    {
        cout<<result[i]<<" ";
    }

}