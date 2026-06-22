#include <bits/stdc++.h>
using namespace std;


//my brute force sol is the better solution
vector<int> max_subarray_brute(vector<int> nums)
{
    int maxSum = INT_MIN,left=0,right=0;
    for(int i=0;i<nums.size();i++)
    {
        int sum = nums[i];
        for(int j=i+1;j<nums.size();j++)
        {
            sum+=nums[j];
            if(maxSum<sum)
            {
                maxSum = max(sum,maxSum);
                left=i;
                right=j;
            }
        }
    }
    vector<int>::const_iterator first = nums.begin()+left;
    vector<int>::const_iterator last = nums.begin()+right;
    vector<int> newVec(first,last);
    return newVec;
}

//stirver's optimal solution
//Kadanes Algorithm when you are finding the maximum sum of the array then you have to see every element and compare with the maximum sum if at any moment the sum turns to be negative then you make the sum = 0 and then restart the maxsum from the point it was turned to zero as like it is just start and then restart
// here the time complexity is 0(N) and space complexity is O(1)
void max_subarray_optimal(vector<int> nums)
{
    int start = 0;
    int sum = 0;
    int maxSum = 0,ansStart=0,ansEnd=0;
    for(int i=0;i<nums.size();i++)
    {
        if(sum==0) start = i;
        sum+=nums[i];
        if(sum>maxSum)
        {
            maxSum = sum;
            ansStart = start;
            ansEnd = i;
        }
        if(sum<0)
        {
            sum=0;
        }
    }
}

int main()
{

}