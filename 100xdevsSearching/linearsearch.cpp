#include <bits/stdc++.h>
using namespace std;

void linearSearch(int val,vector<int> listNumbers)
{
    int length = listNumbers.size();
    for(int i=0;i<length;i++)
    {
        if(listNumbers[i]==val)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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
    linearSearch(numberToFind,listNumbers);
}