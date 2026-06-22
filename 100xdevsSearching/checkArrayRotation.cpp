#include <bits/stdc++.h>
using namespace std;

void checkArrayRotation(vector<int> nums)
{

    int i = 0;
    // int index = -1;
    int size = nums.size();

    for(int j=1;j<size;j++)
    {
        if(nums[i]>=nums[j]) {i=j;break;}
    }
    cout<<i<<endl;
}

int main(){
    int numberOfTest;
    cin>>numberOfTest;

    for(int i=0;i<numberOfTest;i++)
    {
        int numberOfEntries;
        cin>>numberOfEntries;

        vector<int> entries(numberOfEntries);
        for(int j=0;j<numberOfEntries;j++)
        {
            cin >> entries[j];
        }
        checkArrayRotation(entries);
    }
}