#include <bits/stdc++.h>
using namespace std;

void rotateArrayLeft(vector<int> nums,int places)
{
    int size = nums.size();
    vector<int> numbers;
    int cnt = 0;
    for(int i=0;i<nums.size();i++)
    {
        if(places != cnt)
        {
            numbers.push_back(nums[i]);
            cnt++;
        }
        nums[i] = nums[i+places];
    }
    for(int i = 0;i<numbers.size();i++)
    {
        nums[size-places] = numbers[i];
        places--;
    }

    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }

}

int main(){
    int numberOfTestCases;
    cin>>numberOfTestCases;

    for(int i=0;i<numberOfTestCases;i++)
    {
        int numberOfEntries;
        cin>>numberOfEntries;
        vector<int> entries(numberOfEntries);
        for(int j=0;j<numberOfEntries;j++)
        {
            cin>>entries[j];
        }
        int rotatePlaces;
        cin>>rotatePlaces;

        rotateArrayLeft(entries,rotatePlaces);
    }
}