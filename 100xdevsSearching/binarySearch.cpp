#include <bits/stdc++.h>
using namespace std;

void binarySearch(int val,vector<int> listNumbers)
{
    int low = 0;
    int high = listNumbers.size()-1;

    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if(listNumbers[mid]==val)
        {
            cout << "YES";
            return;
        }
        else if(listNumbers[mid]<val)
        {
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    cout<<"NO";
}

int main()
{
    int sizeNumbers;
    cin>>sizeNumbers;
    vector<int> listNumbers;
    for(int i=0;i<sizeNumbers;i++)
    {
        int enterNumber ; 
        cin>> enterNumber;
        listNumbers.push_back(enterNumber);
    }
    int numberToFind;
    cin>>numberToFind;
    binarySearch(numberToFind,listNumbers);
}