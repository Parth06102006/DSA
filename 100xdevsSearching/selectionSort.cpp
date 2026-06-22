#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> listNumbers)
{
    int length = listNumbers.size();
    for(int i=0;i<length-1;i++)
    {
        int minIndex = i;
        for(int j=i;j<length;j++)
        {
            if(listNumbers[minIndex]>listNumbers[j])
            {
                minIndex = j;
            }
        }
        int min_selected = listNumbers[minIndex];
        swap(listNumbers[i],listNumbers[minIndex]);
        cout<<"Pass "<<i+1<<": ";
        for(int i=0;i<length;i++)
        {
            cout<<listNumbers[i]<<" ";
        }
        cout<<", min_selected = "<<min_selected<<endl;
    }

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
    selectionSort(listNumbers);
}