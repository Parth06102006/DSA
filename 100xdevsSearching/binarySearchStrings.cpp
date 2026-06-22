#include <bits/stdc++.h>
using namespace std;

void binarySearch(string val,vector<string> listNumbers)
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
    int sizeWords;
    cin>>sizeWords;
    // here a newline character is left that is the issue so i need to clear the \n character
    cin.ignore();
    vector<string> listWords;
    for(int i=0;i<sizeWords;i++)
    {
        string word; 
        getline(cin,word);
        listWords.push_back(word);
    }
    string wordToFind;
    cin>>wordToFind;
    binarySearch(wordToFind,listWords);
}