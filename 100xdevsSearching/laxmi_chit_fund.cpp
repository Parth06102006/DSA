#include <bits/stdc++.h>
using namespace std;

void findMetaData(vector<int> nums)
{
    long long sum = 0;
    int max_element = INT_MIN;
    int min_element =  INT_MAX;
    for(int i=0;i<nums.size();i++)
    {   
        sum += nums[i];
        if(nums[i]>max_element)
        {
            max_element = nums[i];
        }
        if(nums[i] < min_element)
        {
            min_element = nums[i];
        }
    }
    int average = sum / nums.size();
    cout << sum <<" "<< max_element <<" "<< min_element <<" "<< average ;
}

int main()
{
    int numberOfInvestors ; 

    cin>>numberOfInvestors;

    vector<int> nums(numberOfInvestors);

    for(int i=0;i<numberOfInvestors;i++)
    {
        cin>>nums[i];
    }

    findMetaData(nums);
}