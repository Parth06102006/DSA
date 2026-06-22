#include <bits/stdc++.h>
using namespace std;

/* void stringCompress(string words)
{
    map<char,int> mpp;
    for(int i=0;i<words.size();i++)
    {
        mpp[words[i]]++;
    }

    for(auto &it:mpp)
    {
        cout<<it.first<<it.second;
    }
    cout<<endl;
} */

void stringCompress(string words)
{
    int n = words.size();

    for(int i=0;i<n;)
    {
        char current = words[i];
        int count = 0;
        while(i<n && words[i]==current)
        {
            count++;
            i++;
        }
        cout<<current<<count;
    }
    cout<<endl;
}

int main()
{
    int numberOfTest;
    cin>>numberOfTest;
    cin.ignore();
    for(int i=0;i<numberOfTest;i++)
    {
        string words;
        getline(cin,words);
        stringCompress(words);
    }
}