#include <bits/stdc++.h>
using namespace std;

//Here in the fisrt variety of the problem it states that there would be equal number of positive and equal number of negative hence there would be the arrray like [-4 -5 4 6 -6 7] and we have to rearrange it in this manner [4 -4 6 -5 7 -6] like this with alternate signs of + and -

//Here in the second variety of the problem it states that there would be no equal number of postive and negative

//my optimal solution
// this logic is broken and hence produce wrong results

/* void rearrange_optimal(vector<int> &nums)
{
    int left=0,right=0;
    while(right<=nums.size())
    {
        if(nums[left]>0) {left++; right++;}
        else {right++;}
        if(nums[left]<0 && nums[right]>0) {swap(nums[left],nums[right]); right++; left++;}
    }
} */

//for first variety
//my brute force solution
void rearrange_brute(vector<int> &nums)
{
    vector<int> positive;
    vector<int> negative;
    int i=0,j = 0;
    while(i<(nums.size()) && j<(nums.size()/2))
    {
        if(nums[i]<0)
        {
            i++;
        }
        else
        {
            positive.push_back(nums[i]);
            i++;
            j++;
        }
    }
    i=0;
    j=0;
    while(i<(nums.size()) && j<(nums.size()/2))
    {
        if(nums[i]>0)
        {
            i++;
        }
        else
        {
            negative.push_back(nums[i]);
            i++;
            j++;
        }
    }
    for(int i=0;i<nums.size()/2;i++)
    {
        nums[2*i] = positive[i];
        nums[2*i+1]=negative[i];
    }
}

//for first variety
//strivers optimals solution
vector<int> rearrange_optimal(vector<int> nums)
{
    int n = nums.size();
    vector<int> ans(n,0);
    int posIndex = 0,negIndex =1;
    for(int i=0;i<n;i++)
    {
        if(nums[i]<0)
        {
            ans[negIndex] = nums[i];
            negIndex+=2;
        }
        else
        {
            ans[posIndex] = nums[i];
            posIndex+=2;
        }
    }
    return ans;
}

// for the second variery 
// my brute force solution
void rearrange_brute(vector<int> &nums)
{
    vector<int> positive;
    vector<int> negative;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]>0)
        {
            positive.push_back(nums[i]);
        }
        else
        {
            negative.push_back(nums[i]);
        }
    }
    int n = min(positive.size(),negative.size());

    for(int i=0;i<n;i++)
    {
        nums[2*i] = positive[i];
        nums[2*i+1]=negative[i];
    }
    int index = n*2;
    while(n<positive.size())
    {
        nums[index]=positive[n];
        index++;
        n++;
    }
    while(n<negative.size())
    {
        nums[index]=negative[n];
        index++;
        n++;
    }
}