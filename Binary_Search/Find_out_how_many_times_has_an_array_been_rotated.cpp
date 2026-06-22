#include <bits/stdc++.h>
using namespace std;

int number_of_rotations(vector<int> nums)
{
    int n = nums.size();
    int left = 0;
    int right = n-1;
    int minElem = INT_MAX;
    int k = -1;
    while(left<=right)
    {
        int mid = left + (right-left)/2;

        if(nums[left]<nums[right])
        {
            if(nums[left]<minElem)
            {
                k=left;
                minElem = nums[left];
            }
            break;
        }

        if(nums[left]<nums[mid])
        {
            minElem = min(minElem,nums[left]);
            if(minElem==nums[left]) k = left;
            left = mid+1;
        }
        else if(nums[mid]<nums[right])
        {
            minElem = min(minElem,nums[right]);
            if(minElem==nums[right]) k = right;
            right = mid-1;
        }
    }
    return k;
}
