#include <bits/stdc++.h>
using namespace std;

void secondLargestElement(vector<int> nums,int size)
{
    int max = -1;
    int secondMax = -1;
    for(int i=0;i<size;i++)
    {
        if(max < nums[i])
        {
            secondMax = max;
            max = nums[i];
        }

        if(max>nums[i] && secondMax < nums[i])
        {
            secondMax = nums[i];
        }
    }
    cout<<secondMax<<endl;
}

int main()
{
    int number_of_elements;
    cin>>number_of_elements;

    vector<int> nums(number_of_elements);
    for(int i=0;i<number_of_elements;i++)
    {
        cin>>nums[i];
    }

    secondLargestElement(nums,number_of_elements);
    return 0;
}