#include <bits/stdc++.h>
using namespace std;

int sumVec(vector<int>nums,int start,int end){
    int sum = 0;
    for(int k=start;k<=end;k++)
    {
        sum +=nums[k];
    }
    return sum;
}

void longestSubarray(vector<int> nums,int X)
{
    int i = 0;
    int j = 0;
    int sum = 0;
    int start = i;
    int end = j;
    int maxLength = 0;
    int n = nums.size();
    while(j<n){
        sum = sumVec(nums,i,j);
        if(sum<X)
        {   
            if(maxLength <= j-i+1)
            {
                start = i;
                end = j;
                maxLength = j-i+1;
            }
        }
        else
        {
            i++;
        }
        j++;
    }
    cout<<"Longest Subarray" <<endl;
    for(int i=start;i<=end;i++)
    {
        cout<<nums[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        int number;
        cin>>number;
        nums[i] = number;
    }
    int X;
    cin>>X;
    longestSubarray(nums,X);
}