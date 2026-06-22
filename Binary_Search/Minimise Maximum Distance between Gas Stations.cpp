#include <bits/stdc++.h>
using namespace std;

double minimise_maximise_distance_between_gas_stations(vector<int> nums,int k)
{
    int n = nums.size();
    // check the condition if n==1


    //Find the lower limit
    int low = 0;

    //Find the upper limit
    int high = nums[1]-nums[0];
    for(int i=2;i<n;i++){
        high = max(nums[i],nums[i-1]);
    }

    int ans = INT_MIN;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        int result = checkPossibility(nums,k,mid);
        if(result) {
            ans = result;
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }

    }

    return ans;

}

bool checkPossibility(vector<int> nums,int k,int limit)
{
    int n = nums.size();
    int count = 0;

    for(int i=0;i<n-1;i++)
    {
        if(nums[i]+limit<nums[i+1])
        {
            count++;
        }
    }

    if(count>=k) return true;

    return false;
}

