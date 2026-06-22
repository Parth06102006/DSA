#include <bits/stdc++.h>
using namespace std;
// this problem states that every element next to it must be smaller to the element in it why ? becuase the element needs to be smaller then the next element every element
//like for example : [10 , 22 , 12 , 3 , 0 , 6]
// so the leaders are here 22 , 12 and 6 and the format does not matter how we do it

vector<int> brute_force(vector<int>nums)
{
    vector<int> leaders;
    for(int i=0;i<nums.size();i++)
    {
        int isMax = 1;
        for(int j = i+1;j<nums.size();j++)
        {
            if(nums[j]>nums[1]) 
            {   
                isMax = 0;
                break;
            }
        }
        if(isMax)
        {
            leaders.push_back(nums[j]);
        }
    }
    return leaders;
}// here the time complexity is near about O(N^2) and if the array is 5 , 4, 3, 2, 1 then the space complexity is O(N)

vector<int> optimal(vector<int> nums)
{
    vector<int> ans;
    int min = INT_MIN;
    for(int i=nums.size()-1;i>=0;i--)
    {
        if(nums[i]>min)
        {
            min = nums[i];
            ans.push_back(nums[i]);
        }
    }
    return ans;
    // here ans pr the leaders can be in a format like sorted so apply a sorting algorithm and then complete it
}

int main()
{
}